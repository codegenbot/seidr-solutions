def basement(nums):
    total = prev_sum = nums[0]
    for i in range(1, len(nums)):
        if total < 0 and prev_sum >= 0:
            return i
        total += nums[i]
        prev_sum = total
    return -1