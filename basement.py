def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        if total <= 0:
            total += num
        else:
            return i + 1
    return -1