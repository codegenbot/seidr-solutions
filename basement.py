def basement(nums):
    running_sum = 0
    found_negative = False
    for i in range(len(nums)):
        if running_sum < 0 and not found_negative:
            return i + 1
        running_sum += nums[i]
    return -1