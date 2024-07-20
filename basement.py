def find_first_negative_index(nums):
    total_sum = 0
    for i in range(len(nums)):
        running_sum = total_sum + nums[i]
        if running_sum < 0:
            return i
        total_sum = running_sum
    return -1