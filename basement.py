def basement(nums):
    running_sum = 0
    previous_crossed_negative = False
    for i in range(len(nums)):
        running_sum += nums[i]
        if running_sum < 0 and not previous_crossed_negative:
            return i + 1
        previous_crossed_negative = running_sum < 0
    return -1