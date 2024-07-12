from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for i, num in enumerate(numbers):
        if i < len(numbers):
            result.extend([delimeter])
        result.append(num)
    return result