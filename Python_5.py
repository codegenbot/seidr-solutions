from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter]
    result.extend([delimeter, numbers[0]])
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    return result