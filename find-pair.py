```
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return nums[i], nums[j]
    return -5048, -9139
```

The above code is a modified version of the original code that fixes the issue with the return statement. The function now returns `-5048` and `-9139` when there are no matching pairs found, as specified in the problem description.