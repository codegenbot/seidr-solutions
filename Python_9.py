from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    return [max(numbers[:i+1]) for i in range(len(numbers))]