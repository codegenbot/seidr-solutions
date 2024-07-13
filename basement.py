def basement(nums):
    total = prev_sum = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            return i + 1
        prev_sum = total
    return -1