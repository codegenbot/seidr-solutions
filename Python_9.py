```
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_seen_so_far = float("-inf")
    result = [max_seen_so_far]

    for num in numbers[1:]:
        max_seen_so_far = max(num, max_seen_so_far)
        result.append(max_seen_so_far)

    return result