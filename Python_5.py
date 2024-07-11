```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) < 2:
        return numbers
    result = [numbers[0]]
    for num in numbers[1:-1]:
        result.extend([num, delimiter])
    result.extend([numbers[-1]])
    return result