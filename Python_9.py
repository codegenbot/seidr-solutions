```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_rolling_sum = [0] * len(numbers)
    max_sum = current_sum = numbers[0]
    max_rolling_sum[0] = current_sum
    for i in range(1, len(numbers)):
        if i == 1:
            current_sum += numbers[i]
            max_rolling_sum[i] = current_sum
        else:
            current_sum += numbers[i]
            max_rolling_sum[i] = max(current_sum, max_sum)
            if current_sum < 0:
                current_sum = 0
    return max_rolling_sum