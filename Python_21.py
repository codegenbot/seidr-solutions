from typing import List


def rescale_to_unit() -> str:
    inputs = input("Enter space-separated numbers: ")
    numbers = [float(num) for num in inputs.split()]
    if not numbers:
        return "No input provided"
    
    zero_count = sum(1 for x in numbers if x == 0)
    if zero_count > 0:
        return "All inputs are zero. Please provide non-zero values"
    else:
        min_val = min(numbers)
        max_val = max(numbers)
        rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in numbers]
        return ', '.join(str(num) for num in rescaled_numbers)