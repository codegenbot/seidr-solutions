from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for num in numbers:
        if len(result) > 0 and len(result) % (2 if delimeter else 1) == 0:
            result.append(delimeter)
        result.append(num)
    return result