def basement(nums):
    previous_sum = 0
    for i, num in enumerate(nums):
        running_sum = previous_sum + num
        if running_sum - previous_sum < 0:
            return i + 1
        previous_sum = running_sum
    return len(nums) + 1