from typing import List
import itertools


def rolling_max(numbers: List[int]) -> List[int]:
    return list(itertools.accumulate([0] + numbers, max))