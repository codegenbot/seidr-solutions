from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_seen = float('-inf')
    result = []

    for i in range(len(numbers)):
        max_seen = max(max_seen, numbers[i])
        result.append(max_seen)

    return result