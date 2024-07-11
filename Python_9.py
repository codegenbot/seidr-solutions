from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_seen = [numbers[0]]
    for i in range(1, len(numbers)):
        max_seen.append(max(numbers[: i + 1]))
    return max_seen