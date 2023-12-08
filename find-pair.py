```
def find_pair(nums, target):
    nums.sort()
    for i in range(len(nums)):
        if nums[i] + nums[i+1] == target:
            return nums[i], nums[i+1]
    return None, None
```