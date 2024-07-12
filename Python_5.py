Here is the modified code:

```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        raise ValueError("Expected a list as input")
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("All elements of the list must be integers")
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