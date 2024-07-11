from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.extend([delimeter])
        result.extend([numbers[i]])
    return result