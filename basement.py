def basement(nums):
    total = 0
    min_index = None
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            min_index = i
            break
        if total > 0:
            total = 0
    if min_index is None:
        return len(nums)
    return min_index + 1