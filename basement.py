def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        if total == 0:
            total = num
        elif total < 0:
            return i
        total += num
    return -1