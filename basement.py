def basement(nums):
    running_sum = 0
    first_negative = -1
    for i, num in enumerate(nums):
        running_sum += num
        if running_sum < 0:
            first_negative = i + 1
    return first_negative