def basement(nums):
    running_total = 0
    for i in range(len(nums)):
        running_total += nums[i]
        if running_total < 0:
            return i + 1
    return -1