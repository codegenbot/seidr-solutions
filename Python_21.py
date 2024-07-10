from typing import List


def rescale_to_unit() -> None:
    try:
        numbers = list(
            map(float, input("Enter a list of numbers separated by space: ").split())
        )
        min_val = min(numbers)
        max_val = max(numbers)
        print([(x - min_val) / (max_val - min_val) for x in numbers])
    except ValueError:
        print("Invalid input. Please enter a list of numbers.")