def basement(nums):
    running_sum = 0
    for i in range(len(nums)):
        running_sum += nums[i]
        if running_sum < 0:
            return i + 1
        elif running_sum > 0:
            running_sum = 0
    return -1