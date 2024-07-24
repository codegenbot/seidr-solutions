```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [0]
    max_ = 0
    for i in range(len(numbers)):
        if numbers[i] > max_:
            max_ = numbers[i]
        result.append(max_)
    return result[1:]