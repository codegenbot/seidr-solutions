from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) == 0:
        return []

    min_val = min(numbers)
    max_val = max(numbers)

    if max_val - min_val == 0:
        return [1.0] * len(numbers)

    return [(x - min_val) / (max_val - min_val) for x in numbers]


while True:
    numbers = input("Enter space-separated numbers: ").split()
    try:
        numbers = [float(num) for num in numbers]
        break
    except ValueError:
        print("Invalid input. Please enter only numbers.")