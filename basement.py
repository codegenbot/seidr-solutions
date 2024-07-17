def basement(nums):
    total_sum = 0
    for i in range(len(nums)):
        if total_sum < 0:
            return i + 1
        total_sum += nums[i]
    return -1