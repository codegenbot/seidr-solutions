from typing import List


def rescale_to_unit() -> List[float]:
    try:
        numbers = list(
            map(float, input("Enter space-separated floating point numbers: ").split())
        )
        return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]
    except ValueError:
        print("Invalid input. Please enter floating point numbers separated by spaces.")
        return []