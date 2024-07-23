from typing import list

def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    result = [delimiter]
    for i in range(len(numbers)):
        result.extend([numbers[i], delimiter])
    return result