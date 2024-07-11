```
from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimeter])
    if result[-1] == delimeter:
        result.pop()
    return result