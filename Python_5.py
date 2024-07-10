from typing import List, Any


def intersperse(numbers: List[int], delimiter: int) -> List[Any]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimiter])
    result.extend([delimiter])
    return result