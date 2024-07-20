def basement(nums):
    total_sum = sum(nums)
    for i in range(len(nums)):
        if sum(nums[:i+1]) < 0:
            return i
    return total_sum < 0 and 0 or -1