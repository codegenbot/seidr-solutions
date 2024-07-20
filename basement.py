def basement(nums):
    total_sum = 0
    for i, num in enumerate(nums):
        if total_sum <= 0:
            total_sum += num
        else:
            return i - 1
    return -1