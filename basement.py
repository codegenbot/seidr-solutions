def basement(nums):
    for i, num in enumerate(nums):
        running_sum = sum(nums[:i+1])
        if running_sum < 0:
            return i