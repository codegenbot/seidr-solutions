```python
from bisect import bisect_left

def find_pair(nums, target):
    nums.sort()
    for i in range(len(nums)):
        j = bisect_left(nums, target - nums[i])
        if j != len(nums) and nums[j] + nums[i] == target:
            return nums[i], nums[j]
    return None, None
```