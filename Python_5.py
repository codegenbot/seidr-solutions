```
from typing import List


def intersperse(numbers: List[int], delimiter: str) -> list:
    result = []
    for i, num in enumerate(numbers):
        if i > 0:
            result.extend([delimiter])
        result.extend([str(num), delimiter])
    return result[:-1]