def basement(nums):
    cum_sum = 0
    i = 0
    while i < len(nums):
        if cum_sum < 0:
            return i + 1
        cum_sum += nums[i]
        i += 1