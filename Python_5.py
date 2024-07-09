from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0], delimiter]
    for i in range(1, len(numbers)):
        result.extend([delimiter, numbers[i]])
    return result