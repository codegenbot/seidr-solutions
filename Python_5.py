from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter]
    result.extend([delimeter] + [n for n in numbers] + [delimeter])
    return result