```
from typing import List


def intersperse(numbers: List[int], delimiter: str) -> list:
    result = [delimiter]
    for i, num in enumerate(numbers):
        if i > 0:
            result.extend([delimiter])
        result.extend([str(num)])
    result.append(']')
    return [ '[' ] + result