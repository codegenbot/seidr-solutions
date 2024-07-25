from typing import List


def rolling_max(numbers: List[List[int]]) -> List[int]:
    result = [max(row) for row in zip(*numbers)]
    return result