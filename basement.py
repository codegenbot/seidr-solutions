def basement(nums):
    cum_sum = 0
    for i in range(len(nums)):
        if cum_sum <= 0:
            cum_sum = nums[i]
        else:
            cum_sum += nums[i]
        if cum_sum < 0:
            return i + 1