```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    for i in range(len(numbers)):
        result.extend([delimiter, numbers[i]])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result