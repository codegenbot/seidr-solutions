def leaders(nums):
    result = [nums[-1]]
    for i in range(len(nums) - 2, -1, -1):
        if nums[i] >= nums[-1]:
            result.insert(0, nums[i])
            nums[-1] = nums[i]
    return result