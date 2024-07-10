def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        if total < 0:
            return i + 1
        total += num
    return None