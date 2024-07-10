def basement(nums):
    total = 0
    prev_total = 0
    for i, num in enumerate(nums):
        total += num
        if total < prev_total:
            return i
        prev_total = total
    return -1