def basement(nums):
    cum_sum = nums[0]
    for i in range(len(nums)):
        if cum_sum <= 0:
            return i + 1
        cum_sum += nums[i]
    return -1