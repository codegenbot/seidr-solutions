def basement(nums):
    total_sum = 0
    for i, num in enumerate(nums, 1):
        total_sum += num
        if total_sum < 0:
            return i
    return -1