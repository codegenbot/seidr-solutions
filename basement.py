def basement(nums):
    for i in range(len(nums)):
        total_sum = 0
        for j in range(i + 1):
            total_sum += nums[j]
            if total_sum < 0:
                return i
    return -1