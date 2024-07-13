def basement(nums):
    running_sum = 0
    max_sum_so_far = 0
    for i in range(len(nums)):
        running_sum += nums[i]
        if running_sum < 0:
            return i + 1
        elif running_sum > max_sum_so_far:
            max_sum_so_far = running_sum
    return -1