from typing import list


def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    result = [delimiter]
    for i in range(len(numbers)):
        result.extend([numbers[i]])
        if i < len(numbers) - 1:
            result.extend([delimiter])
    return result