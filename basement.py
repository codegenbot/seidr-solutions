def basement(nums):
    is_negative = False
    running_sum = 0
    for i in range(len(nums)):
        running_sum += nums[i]
        if not is_negative and running_sum < 0:
            return i + 1
        is_negative = running_sum < 0