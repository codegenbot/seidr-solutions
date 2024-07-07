def basement(nums):
    for i, num in enumerate(nums):
        running_total = sum(nums[:i+1])
        if running_total < 0:
            return i
    return -1