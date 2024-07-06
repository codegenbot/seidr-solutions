from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers or not numbers[0]:
        return []
    
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    if result and result[-1] == delimiter:
        result.pop()  # remove trailing delimiter
    return result