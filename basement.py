def basement(nums):
    for i in range(len(nums)):
        running_sum = 0
        for j in range(i+1):
            running_sum += nums[j]
            if running_sum < 0:
                return i + 1
    return -1