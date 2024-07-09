def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0: continue
        elif total == 0: total = 1
        else: return i + 1
    return -1