from typing import list

def intersperse(numbers: list, delimeter: int) -> list:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    return result