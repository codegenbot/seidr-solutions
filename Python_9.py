from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_seen_so_far = float("-inf")

    for num in numbers:
        current_max = max(num, max_seen_so_far)
        result.append(current_max)
        max_seen_so_far = current_max

    return result