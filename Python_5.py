```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result.pop(), delimiter])
    result.append(numbers[-1])
    return result