```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        numbers = [numbers]
    
    if not all(isinstance(num, int) for num in numbers[0]):
        return []

    if len(delimiter) != 1:
        return []

    result = []
    for i, num in enumerate(numbers):
        if i > 0:
            result.append(delimiter)
        result.extend([str(num)] * (len(numbers) - i))
    return [int(i) for i in result]