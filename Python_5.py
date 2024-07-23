```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) <= 1:
        return numbers
    
    result = [numbers[0]]
    for i, num in enumerate(numbers[1:], start=1):
        result.extend([num])
        if i < len(numbers) - 1:
            result.append(delimiter)
    
    return result