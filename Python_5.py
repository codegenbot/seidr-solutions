```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([delimiter, num])
        last_delimiter_index = len(result) - 2
        while last_delimiter_index >= 0 and result[last_delimiter_index] == delimiter:
            result.pop(last_delimiter_index)
    return result