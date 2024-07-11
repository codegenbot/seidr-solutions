from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.extend([delimiter])
        result.extend([numbers[i]])
    return result