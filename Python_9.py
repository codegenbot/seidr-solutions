```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_rolling_sum = [0]
    current_sum = 0
    for num in numbers:
        current_sum += num
        max_rolling_sum.append(max(current_sum, 0))
    return max_rolling_sum