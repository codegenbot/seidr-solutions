def basement(nums):
    total = 0
    min_index = None
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            min_index = i
            break
    return min_index