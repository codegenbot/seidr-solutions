from typing import List

def intersperse(numbers: list[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimiter])
    return result