def basement(nums):
    for i in range(len(nums)):
        running_sum = sum(nums[:i+1])
        if running_sum < 0:
            return i + 1
    return -1