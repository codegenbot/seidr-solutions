```
from typing import List

def intersperse(numbers: list, delimiter: int) -> List[int]:
    if len(numbers) == 0:
        return []
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    return result