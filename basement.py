def basement(nums):
    for i in range(1, len(nums)):
        total = sum(nums[:i])
        if total < 0:
            return i
    return -1