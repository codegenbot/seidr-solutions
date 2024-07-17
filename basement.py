def basement(nums):
    total_sum = 0
    for i in range(1, len(nums)+1):
        total_sum += nums[i-1]
        if total_sum < 0:
            return i