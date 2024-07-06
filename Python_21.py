from typing import List


def rescale_to_unit():
    numbers = input("Enter a list of numbers (separated by space): ")

    try:
        numbers = [float(x) for x in numbers.split()]
        return rescale_to_unit(numbers)
    except ValueError as e:
        print(f"Error: {e}")
        return None


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list of numbers")

    if not all(isinstance(x, float) for x in numbers):
        raise ValueError("Input list must contain only numbers")

    try:
        min_val = min(numbers)
        max_val = max(numbers)
        return [(x - min_val) / (max_val - min_val) for x in numbers]
    except TypeError:
        raise ValueError("Input list must contain only numbers")