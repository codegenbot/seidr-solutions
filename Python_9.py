```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = [0] * len(numbers)
    result = [max(0)]

    for i in range(len(numbers)):
        if i == 0:
            result.append(max(0))
        else:
            result.append(max(sum([numbers[j] for j in range(i+1)])))

    return result