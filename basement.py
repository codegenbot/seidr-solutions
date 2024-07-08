def basement(nums):
    for i, _ in enumerate(nums):
        cum_sum = 0
        for j in range(i + 1):
            cum_sum += nums[j]
            if cum_sum < 0:
                return j + 1
    return -1