```
from typing import List


def max_rolling_sum(numbers: List[int], k: int) -> List[int]:
    result = []
    window_sum = sum(max(nums[i-k+1:i+1]) for i in range(k-1))
    result.append(window_sum)
    for i in range(k-1, len(numbers)):
        window_sum = window_sum - max(nums[i-k+1:i]) + max(nums[i-k+2:i+1])
        result.append(window_sum)
    return result