def basement(nums):
    for i, num in enumerate(nums):
        running_sum = 0
        for j in range(i, len(nums)):
            running_sum += nums[j]
            if running_sum < 0:
                return i
    return -1