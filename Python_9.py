from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_seen = float('-inf')
    result = []
    for num in numbers:
        max_seen = max(num, max_seen)
        result.append(max_seen)
    return result