from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter]  
    for num in numbers:
        result.extend([num, delimeter])  
    return result if numbers else [delimeter] 