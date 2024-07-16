def basement(nums):
    cum_sum = 0
    for i in range(1, len(nums)):
        if cum_sum <= 0:
            cum_sum += nums[i]
        else:
            return i