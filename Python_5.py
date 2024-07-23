from typing import list

def intersperse(numbers: list[int], delimeter: int) -> list[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    result.append(delimeter)
    return result