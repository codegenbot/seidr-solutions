```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimiter])
        result.append(numbers[i])
    if result[-1] == numbers[0]:
        result.pop()
    return result