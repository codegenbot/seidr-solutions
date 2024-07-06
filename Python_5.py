from typing import List

def intersperse(numbers: List[int], delimiter: int) -> list:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimiter, numbers[i]])
    return result