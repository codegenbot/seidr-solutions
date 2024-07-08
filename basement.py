def basement(nums):
    total = 0
    for i in range(len(nums)):
        total = nums[i] + total 
        if total < 0:
            return i
    return -1