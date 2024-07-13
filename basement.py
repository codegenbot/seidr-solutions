def basement(nums):
    total = sum(nums)
    if total < 0:
        return 0
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            return i + 1
    return -1