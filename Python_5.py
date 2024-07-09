from typing import List


def intersperse(numbers: list, delimeter: int) -> list:
    if all(isinstance(num, (int, float)) for num in numbers):
        result = [numbers[0]]
        for i in range(1, len(numbers)):
            result.extend([delimeter, numbers[i]])
        return result
    else:
        raise ValueError("Input must be a list of integers or floats")