def basement(nums):
    total = 0
    index = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return index + 1
        index += 1
    return -1