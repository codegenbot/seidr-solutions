```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        return []

    result = [numbers[0]]

    for num in numbers[1:]:
        result.extend([delimiter, num])
        last_index = len(result) - 1
        while last_index > 1 and result[last_index] == result[last_index-1]:
            del result[-1]

    return result