def basement(nums):
    cum_sum = 0
    i = 1
    while True:
        cum_sum += nums[i - 1]
        if cum_sum < 0:
            return i
        i += 1