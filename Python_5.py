```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for num in numbers:
        result.extend([delimiter, num])
    if len(result) > 0 and result[0] == delimiter:
        result.pop(0)
    return result