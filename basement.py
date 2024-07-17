def basement(nums):
    total_sum = 0
    for i in range(len(nums)):
        if total_sum <= 0:
            total_sum += nums[i]
        else:
            return i
    return -1