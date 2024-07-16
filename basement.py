def basement(nums):
    cum_sum = nums[0]
    min_idx = len(nums)
    for i in range(1, len(nums)):
        if cum_sum < 0:
            min_idx = i
            break
        cum_sum += nums[i]
    return min_idx + 1 if min_idx != len(nums) else -1