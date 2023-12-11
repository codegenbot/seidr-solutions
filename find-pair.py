
>> The following is a revised version of the code with a fix for the issue:
```
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return nums[i], nums[j], nums[k]
    return None, None, None
```