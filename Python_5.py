```
from typing import List


def intersperse(numbers: List[int], delimiter: str) -> list:
    result = [str(numbers[0])]
    for i, num in enumerate(numbers[1:], start=1):
        result.extend([delimiter])
        result.append(str(num))
    return result