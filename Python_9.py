```
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(nums) for nums in ([num] + numbers[:i]) for i, num in enumerate(numbers)]
    
    return result

print(rolling_max([1, 2, 3, 4, 5]))