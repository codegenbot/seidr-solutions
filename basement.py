def basement(nums):
    running_sum = 0
    for i, num in enumerate(nums):
        if running_sum <= 0:
            running_sum += num
        else:
            return i + 1
    return len(nums) + 1