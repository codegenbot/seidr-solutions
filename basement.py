def basement(nums):
    prev_sum = 0
    for i, num in enumerate(nums):
        total = prev_sum + num
        if total < 0:
            return i
        prev_sum = total
    return -1