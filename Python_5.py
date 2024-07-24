from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.append(delimeter)
        result.extend([delimeter, numbers[i]])
    return [x for x in result if isinstance(x, int)]