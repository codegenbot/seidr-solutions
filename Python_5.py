from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter] if delimeter else []
    for num in numbers:
        result.extend([delimeter, num])
    result.extend([delimeter]) if delimeter else None
    return result