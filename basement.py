def basement(nums):
    total = -1
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            return i
    return -1