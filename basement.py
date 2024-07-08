def basement(nums):
    total = nums[0]
    for i in range(1, len(nums)):
        if total <= 0:
            return i
        total += nums[i]
    return -1