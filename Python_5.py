from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for num in numbers:
        if num == delimeter:
            result.append(num)
        else:
            if not result or result[-1] != delimeter:
                result.append(delimeter)
            result.append(num)
    return result