```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        return [numbers[0]]
    if not all(isinstance(i, int) for i in numbers):
        return [0]
    if not isinstance(delimiter, int):
        return [1]

    result = []
    
    if not numbers:
        return result
    if delimiter not in set(numbers):
        return [delimiter]

    result.append(numbers[0])
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    return result