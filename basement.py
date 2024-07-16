def basement(nums):
    cum_sum = 0
    i = 0
    while i < len(nums):
        if cum_sum > 0:
            cum_sum = 0
        cum_sum += nums[i]
        if cum_sum < 0:
            return i + 1
        i += 1