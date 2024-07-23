def basement(nums):
    left = 0
    for i, num in enumerate(nums):
        if sum(nums[:i+1]) < 0:
            return i
    return -1