from typing import List


def intersperse(numbers: List[int], delimeter: int) -> list:
    result = [numbers[0]]
    if len(numbers) > 1:
        result.extend([result[-1], delimeter])
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    return result