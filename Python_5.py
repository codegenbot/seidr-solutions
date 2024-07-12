```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        raise ValueError("Input should be a list of integers.")
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimiter])
    return result