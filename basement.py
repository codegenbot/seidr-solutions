def basement(nums):
    total = None
    for i, num in enumerate(nums):
        total = num if total is None else total + num
        if total < 0:
            return i + 1
    return -1