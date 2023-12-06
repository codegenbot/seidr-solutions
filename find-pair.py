```
def find_pair(nums, target):
    nums.sort()
    for i in range(len(nums)):
        j = lower_bound(nums, target - nums[i])
        if j != len(nums) and nums[j] + nums[i] == target:
            return nums[i], nums[j]
    return None, None
```