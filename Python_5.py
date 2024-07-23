```
from typing import list

def intersperse(numbers: list[int], delimeter: int) -> list[int]:
    if len(numbers) == 1:
        return [numbers[0]] * (len(numbers) - 1) + [delimeter] * (len(numbers) - 2) + [numbers[0]]
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    return result