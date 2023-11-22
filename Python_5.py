from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    if not numbers:
        return result
    
    for i in range(len(numbers)):
        result.append(numbers[i])
        result.append(delimiter)
    return result[:-1]