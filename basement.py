def basement(nums):
    for i, n in enumerate(nums):
        total = sum(nums[:i+1])
        if total < 0:
            return i + 1
    return -1