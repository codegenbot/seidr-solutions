def basement(nums):
    if nums[0] < 0: 
        return 0
    for i, num in enumerate(nums, 1):
        if sum(nums[:i]) < 0:
            return i
    return -1