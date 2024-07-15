def basement(nums):
    total = start_index = 0
    for i in range(len(nums)):
        if total < 0:
            return start_index + 1
        total += nums[i]
        if total < 0:
            start_index = i + 1
    return -1