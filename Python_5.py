```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(0, len(numbers) - 1):
        result.extend([numbers[i], delimiter])
    result.append(numbers[-1])
    return result