def basement(nums):
    cumulative_sum = 0
    for i in range(len(nums)):
        cumulative_sum += nums[i]
        if cumulative_sum < 0:
            return i + 1
    return -1