from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for num in numbers:
        result.extend([delimiter, num])
    if len(result) > 0 and result[0] == delimiter:
        result.pop(0)
    if len(result) > 1 and result[-1] == delimiter:
        result.pop()
    return result