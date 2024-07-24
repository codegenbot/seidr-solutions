from typing import list

def intersperse(numbers: list[int], delimeter: int) -> list[int]:
    if len(numbers) > 1:
        result = [numbers[0]]
    else:
        result = numbers
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    return result