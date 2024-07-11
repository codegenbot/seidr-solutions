```
from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        if num == delimeter:
            result.append(num)
        else:
            result.extend([num, delimeter])
    return result