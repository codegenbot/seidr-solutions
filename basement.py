def basement(nums):
    total = 0
    for i in range(len(nums)):
        if total <= 0:
            total += nums[i]
        else:
            return i
    return -1