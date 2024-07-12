def minSubArraySum(nums):
    nums.sort()
    return sum(nums[: len(nums) - 1])