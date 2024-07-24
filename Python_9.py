from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_seen_so_far = float("-inf")
    result = [0] * len(numbers)

    for i, num in enumerate(numbers):
        max_seen_so_far = max(num, max_seen_so_far)
        result[i] = max_seen_so_far

    return result