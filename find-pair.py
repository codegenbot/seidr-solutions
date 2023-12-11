def find_pair(nums, target):
    nums = set(nums)
    for i in range(len(nums)):
        if target - nums[i] in nums:
            return nums[i], target - nums[i]
    return None, None