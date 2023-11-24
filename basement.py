def basement(nums):
    total = 0
    min_index = None
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            min_index = i
            break
    if min_index is None:
        if total < 0:
            return len(nums)
        else:
            return len(nums) + 1
    else:
        return min_index + 1