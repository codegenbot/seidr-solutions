def basement(nums):
    total = prev_sum = nums[0]
    for i in range(1, len(nums)):
        total += nums[i]
        if total < 0 and prev_sum >= 0:
            return i - 1
        prev_sum = total
    return -1