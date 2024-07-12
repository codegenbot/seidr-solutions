```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        return []
    if not all(isinstance(num, int) for num in numbers):
        return []
    if not isinstance(delimiter, int):
        return []
    if delimiter < 1:
        return []

    if delimiter in numbers or len([num for num in numbers if num == delimiter]) > 1:
        return []

    if not numbers:
        return []
    
    result = [numbers[0]]
    for num in numbers[1:]:
        if num == delimiter:
            result.append(num)
        else:
            result.extend([delimiter, num])
    return result