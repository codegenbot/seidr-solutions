def basement(nums):
    total = start_index = 0
    for i, num in enumerate(nums, 1):
        total += num
        if total < 0:
            return i
    return -1