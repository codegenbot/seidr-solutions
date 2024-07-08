from typing import list


def intersperse(numbers: list[int], delimeter: int) -> list[int]:
    result = []
    for i, num in enumerate(numbers):
        if i > 0:
            result.extend([delimeter])
        result.append(num)
    return result