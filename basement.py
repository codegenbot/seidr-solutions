def basement(nums):
    for i, x in enumerate(nums):
        total = 0
        for j in range(i, len(nums)):
            total += nums[j]
            if total < 0:
                return i
    return -1