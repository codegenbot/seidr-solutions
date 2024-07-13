def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0 and prev_sum >= 0:
            return i
        prev_sum = total
    return -1