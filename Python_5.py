```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if delimiter in numbers or delimiter < 1:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        if num == delimiter:
            result.append(num)
        else:
            if len(result) > 1 and result[-2] != delimiter:
                result.insert(-1, delimiter)
            result.append(num)
    return result