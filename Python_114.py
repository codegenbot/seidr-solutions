def minSubArraySum(nums):
    if len(nums) == 0:
        return None
    min_sum = nums[0]
    for i in range(1, len(nums)):
        if nums[i] < min_sum:
            min_sum = nums[i]
    return min_sum