def basement(nums):
    total_sum = 0
    first_negative_index = 0
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i + 1
        if total_sum == 0 and i > first_negative_index:
            first_negative_index = i
    return -1