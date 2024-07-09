```
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    max_so_far = max_current = numbers[0]
    result = [max_current]

    for num in numbers[1:]:
        max_current = max(num, max_current)
        result.append(max_current)

    return result