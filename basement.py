def basement(nums):
    total_sum = 0
    for i, num in enumerate(nums):
        total_sum += num
        if total_sum < 0:
            return i + 1
    return 0 if sum(nums[:1]) < 0 else -1