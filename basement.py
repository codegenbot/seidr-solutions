def basement(nums):
    running_sum = nums[0]
    for i, num in enumerate(nums[1:], 1):
        running_sum += num
        if running_sum < 0:
            return i
    return len(nums) + 1