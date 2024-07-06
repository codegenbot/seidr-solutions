```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 0:
        return []

    result = [numbers[0]]
    if numbers[1:] and delimiter != 0:
        for num in numbers[1:]:
            result.extend([result[-1], delimiter, num])
    return result