```
def find_pair(nums, target):
    total = 0
    for i in range(len(nums)):
        if nums[i] == target - total and total + nums[i] >= target:
            return (total, nums[i])
        total += nums[i]
    return None
```