def basement(nums):
    total_sum = 0
    for i, num in enumerate(nums):
        if total_sum <= 0:
            total_sum += num
        else:
            return i
    return len(nums) - 1