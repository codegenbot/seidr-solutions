```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_rolling_sum = []
    current_sum = 0
    for num in numbers:
        current_sum = max(0, current_sum + num)
        max_rolling_sum.append(current_sum)
    return max_rolling_sum