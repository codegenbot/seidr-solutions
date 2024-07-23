def basement(nums):
    total = 0
    for i, n in enumerate(nums):
        total += n
        if total < 0:
            return i + 1
    return -1