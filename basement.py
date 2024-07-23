```
def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return i + 1
        total = 0
    return -1