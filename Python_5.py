```
from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if not isinstance(numbers, list):
        raise ValueError("Input 'numbers' should be a list of integers.")
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimeter])
    return result