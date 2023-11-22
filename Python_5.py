from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    if numbers:
        result.append(numbers[0])
    for i in range(1, len(numbers)):
        result.append(delimiter)
        result.append(numbers[i])
    return result