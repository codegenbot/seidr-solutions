def basement(nums):
    cum_sum = nums[0]
    cum_sum_index = -1
    for i in range(1, len(nums)):
        cum_sum += nums[i]
        if cum_sum < 0:
            return i + 1
    return cum_sum_index