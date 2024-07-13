def basement(nums):
    total = float('-inf')
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            return i + 1
    return -1