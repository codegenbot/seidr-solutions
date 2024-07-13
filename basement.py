def basement(nums):
    running_sum = 0
    for i in range(1, len(nums) + 1):
        running_sum += nums[i - 1]
        if running_sum < 0:
            return i