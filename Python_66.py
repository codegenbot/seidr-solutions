def findMissingNumber(nums):
    if len(nums) == 0:
        return 1
    nums.sort()
    for i in range(len(nums) - 1):
        if nums[i+1] - nums[i] > 1:
            return nums[i] + 1
    return nums[-1] + 1