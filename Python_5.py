```Python
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) <= 1:
        return numbers
    result = [numbers[0]]
    for num, n in zip(numbers[1:], numbers):
        result.extend([num, delimiter])
    result.append(delimiter)
    return result