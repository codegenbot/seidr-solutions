```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        if num == delimiter:
            result.append(num)
        else:
            while len(result) > 1 and result[-1] == delimiter:
                result.pop()
            result.append(delimiter)
            result.append(num)
    return result