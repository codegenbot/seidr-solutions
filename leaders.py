def leaders(nums):
    n = len(nums)
    result = [nums[n - 1]]
    for i in range(n - 2, -1, -1):
        if nums[i] >= nums[i + 1]:
            result.insert(0, nums[i])
    return result