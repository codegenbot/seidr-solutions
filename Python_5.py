from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter] if numbers and delimeter else []
    if numbers:
        result.append(numbers[0])
        for num in numbers[1:]:
            result.extend([delimeter, num])
        result.append(delimeter)
    return result