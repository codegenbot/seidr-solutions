from typing import List


def intersperse(numbers: List[int], delimeter: str) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result += [delimeter] + [numbers[i]]
    return result