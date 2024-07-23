```
from typing import list

def intersperse(numbers: list[int], delimeter: int) -> list[int]:
    if len(numbers) == 1:
        return numbers
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter, str(numbers[i])])
    return result