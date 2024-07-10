def basement(nums):
    total = 0
    for i in range(len(nums)):
        if total > 0:
            total = nums[i]
        else:
            total += nums[i]
        if total < 0:
            return i + 1
    return -1