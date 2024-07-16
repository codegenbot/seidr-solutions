def basement(nums):
    cum_sum = nums[0]
    i = 1
    while True:
        if cum_sum < 0:
            return i
        cum_sum += nums[i - 1]
        i += 1