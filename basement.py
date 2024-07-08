def basement(nums):
    total = sum(0 for _ in range(len(nums)))
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return i + 1
    return -1