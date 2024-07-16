def basement(nums):
    cum_sum = 0
    i = 1
    while i <= len(nums):
        if cum_sum < 0: return i
        cum_sum += nums[i-1]
        i += 1
    return -1