def basement(nums):
    if sum(nums) < 0: 
        return 1
    for i, num in enumerate(nums, 1):
        if sum(nums[:i]) < 0:
            return i
    return -1