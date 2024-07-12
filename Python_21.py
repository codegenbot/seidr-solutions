from typing import List


def rescale_to_unit() -> str:
    inputs = input("Enter space-separated numbers: ")
    numbers = [float(num) for num in inputs.split()]

    if not numbers:
        return "No input provided"

    min_val = min(numbers)
    max_val = max(numbers)
    rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in numbers]

    return ", ".join(str(round(num, 2)) for num in rescaled_numbers)