from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(i) for i in zip([0] + numbers, numbers)]
    return result