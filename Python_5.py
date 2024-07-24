from typing import list

def intersperse(numbers: list[int], delimeter: int) -> list[int]:
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.append(delimeter)
        result.extend([numbers[i]])
    return result