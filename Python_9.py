from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_seen_so_far = [numbers[0]]
    for num in numbers[1:]:
        max_seen_so_far.append(max(num, max_seen_so_far[-1]))
    return max_seen_so_far