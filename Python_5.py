```
from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    if delimeter not in result:
        return result
    return [x for i, x in enumerate(result) if i % 2 != 0] + [result[-1]]