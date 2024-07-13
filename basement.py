def basement(nums):
    for i, num in enumerate(nums):
        running_sum = 0
        for j in range(i + 1):
            running_sum += nums[j]
        if running_sum < 0:
            return i + 1
    return len(nums) + 1