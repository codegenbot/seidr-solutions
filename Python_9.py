from typing import List


def max_rolling_sum(numbers: List[int], k: int) -> List[int]:
    result = [sum(max(nums[i-k+1:i+1]) for nums in (iter(numbers[i-k+1:i+1]),)*k) 
              if i >= k else 0 
              for i in range(len(numbers))]
    return result