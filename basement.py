def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            continue
        if total == 0:
            total = 0
        else:
            return i
    return -1