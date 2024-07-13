def basement(nums):
    running_sum = 0
    for i, num in enumerate(nums):
        running_sum += num
        if running_sum < 0:
            return i + 1
    return 0