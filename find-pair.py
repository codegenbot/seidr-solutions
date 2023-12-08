
```
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if abs(nums[i]) + abs(nums[j]) == target:
                return nums[i], nums[j]
    return None, None
``` 