from typing import list

def intersperse(numbers: list[int], delimeter: int) -> list[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimeter)
    return result