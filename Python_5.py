```
from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        if 1 <= delimeter <= len(result):
            result.insert(delimeter, numbers[i])
        else:
            result.extend([delimeter, numbers[i]])
    return result