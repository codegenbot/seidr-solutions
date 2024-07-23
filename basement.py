def basement(nums):
    for i, num in enumerate(nums, 1):
        total = sum(nums[:i])
        if total < 0:
            return i
    return -1