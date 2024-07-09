def basement(nums):
    prev_total = 0
    for i in range(len(nums)):
        total = prev_total - nums[i]
        prev_total = total
        if total < 0: return i + 1
    return -1