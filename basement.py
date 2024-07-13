def basement(nums):
    total = prev_sum = 0
    for i, num in enumerate(nums):
        prev_sum = total
        total += num
        if total < 0:
            return i + 1
    return -1