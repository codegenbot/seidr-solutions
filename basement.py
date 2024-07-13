def basement(nums):
    total = 0
    prev_sum = 0
    for i in range(len(nums)):
        if total < 0 and prev_sum >= 0:
            return i
        total += nums[i]
        prev_sum = total
    return -1