def basement(nums):
    total = 0
    for i in range(1, len(nums)):
        total += nums[i]
        if total < 0:
            return i + 1
    return None