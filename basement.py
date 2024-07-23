```
def basement(nums):
    total = 0
    for i, _ in enumerate(nums): 
        total += nums[i]
        if total < 0: return i + 1 
    return -1