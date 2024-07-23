from typing import list


def intersperse(numbers: list[int], delimeter: int) -> list[int]:
    result = [delimeter]
    for i in range(len(numbers)):
        result.extend([numbers[i], delimeter])
    return result