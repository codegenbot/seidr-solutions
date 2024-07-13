def basement(nums):
    for i, num in enumerate(nums):
        total = 0
        for j in range(i+1):
            total += nums[j]
        if total < 0:
            return i + 1
    return -1