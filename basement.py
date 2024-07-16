def basement(nums):
    cum_sum = nums[0]
    i = 1
    while True:
        if cum_sum <= 0:
            cum_sum += nums[i]
        else:
            cum_sum = nums[i]
        i += 1
        if cum_sum < 0:
            return i