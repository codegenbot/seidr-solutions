def basement(nums):
    left = total = 0
    for right in range(len(nums)):
        if total < 0:
            return right + 1 
        total += nums[right]
    return -1