def basement(nums):
    total = 0
    i = 0
    while i < len(nums):
        total += nums[i]
        if total < 0: return i + 1
        i += 1
    return -1