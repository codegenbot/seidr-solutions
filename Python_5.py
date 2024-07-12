```
from typing import List


def intersperse(numbers: list, delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        return ["Input should be a list"]
    if not all(isinstance(i, int) for i in numbers):
        return ["All elements in the list should be integers"]
    if not isinstance(delimiter, int):
        return ["Delimiter should be an integer"]
    
    if not numbers:
        return []
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    return result