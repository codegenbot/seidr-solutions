def basement(nums):
    total = 0
    for i in range(len(nums)):
        total = 0 if i == 0 else total + nums[i]
        if total < 0:
            return i + 1
    return -1