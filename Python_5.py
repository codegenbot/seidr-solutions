from typing import List, Any


def intersperse(numbers: List[int], delimeter: int) -> List[any]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimeter])
    result.extend([delimeter])
    return result