from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for number in numbers:
        result.append(number)
        result.append(delimiter)
    return result[:-1]