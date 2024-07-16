def basement(nums):
    cum_sum = -1
    i = 0
    while i < len(nums):
        cum_sum += nums[i]
        if cum_sum < 0:
            return i + 1
        i += 1