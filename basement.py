def basement(nums):
    total_sum = 0
    for i, num in enumerate(nums):
        if total_sum <= 0:
            total_sum += num
        else:
            total_sum += num
            if total_sum < 0:
                return i + 1
    return -1