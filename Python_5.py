from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    return result[:-1] if result else []