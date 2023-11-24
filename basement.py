def basement(nums):
    total = 0
    min_index = None
    for i in range(len(nums)):
        total += nums[i]
        if total <= 0:
            min_index = i + 1
            break
    if min_index is None:
        return len(nums)
    else:
        return min_index