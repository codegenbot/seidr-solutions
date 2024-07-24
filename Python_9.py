```
from typing import list
def rolling_max(numbers: list[int]) -> list[int]:
    max_seen_so_far = float("-inf")
    result = []
    for num in numbers:
        max_seen_so_far = max(num, max_seen_so_far)
        result.append(max_seen_so_far)
    return result