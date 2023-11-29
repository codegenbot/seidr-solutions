from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for num in numbers:
        result.append(num)
        result.append(delimiter)
    result.pop()
    return result