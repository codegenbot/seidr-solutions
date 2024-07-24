from typing import List

def intersperse(numbers: List[int], delimiter: int) -> list:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimiter])
    return result