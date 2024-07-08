```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_rolling_sum = [0] * len(numbers)
    current_sum = numbers[0]
    max_rolling_sum[0] = current_sum
    for i in range(1, len(numbers)):
        if current_sum > max_rolling_sum[i-1]:
            max_rolling_sum[i] = current_sum
        else:
            max_rolling_sum[i] = max_rolling_sum[i-1]
        current_sum += numbers[i] - numbers[i-1]
    return max_rolling_sum