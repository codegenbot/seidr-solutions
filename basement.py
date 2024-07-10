def basement(nums):
    for i, num in enumerate(nums):
        total = sum(nums[:i+1]) - num
        if total < 0:
            return i + 1
    return -1