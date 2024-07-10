def basement(nums):
    total = 0
    for i in range(len(nums)):
        if total > 0 and nums[i] < 0:
            return i + 1
        total += nums[i]
    return -1