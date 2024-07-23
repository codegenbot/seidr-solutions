def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            return i + 1
        elif total == 0:
            total = 0
    return -1