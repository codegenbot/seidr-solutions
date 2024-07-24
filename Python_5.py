```
from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter]
    for i in range(len(numbers)):
        result.extend([numbers[i]])
        if i < len(numbers) - 1:
            result.extend([delimeter])
    return result