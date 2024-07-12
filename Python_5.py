```
from typing import List

def intersperse(numbers: List[int], delimeter: int = None) -> List[int]:
    result = []
    if numbers:
        if delimeter:
            result.append(delimeter)
        for num in numbers:
            result.append(num)
            if delimeter:
                result.extend([delimeter, num])
        if delimeter:
            result.append(delimeter)
    return result