def leaders(nums):
    result = []
    for i in range(len(nums)):
        if nums[i] >= max(nums[i+1:], default=0):
            result.append(nums[i])
    return result