def basement(nums):
    total_sum = sum(nums)
    for i in range(len(nums)):
        if total_sum - sum(nums[:i+1]) < 0:
            return i
    return -1