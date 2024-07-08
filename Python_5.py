from typing import list

def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    result = []
    for num in numbers:
        if len(result) > 1:
            result.append(delimiter)
        result.append(num)
    return result