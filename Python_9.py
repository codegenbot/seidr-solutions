```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_seen_so_far = float('-inf')
    for num in numbers:
        max_seen_so_far = max(max_seen_so_far, num)
        result.append(max_seen_so_far)
    return result