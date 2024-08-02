```
from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimeter])
    if delimeter != 0 and len(result) > 0:
        result.append(delimeter)
    return result