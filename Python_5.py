from typing import List

def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result