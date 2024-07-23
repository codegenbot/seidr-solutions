```
def basement(nums):
    for i in range(len(nums)):
        total = 0
        for j in range(i+1):
            total += nums[j]
        if total < 0:
            return i + 1
    return -1