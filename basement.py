def basement(nums):
    total = 0
    for i in range(len(nums)):
        if total < 0:
            return i
        total += nums[i]
    return -1