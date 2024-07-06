def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float("inf")
    left = 0
    for right in range(len(nums)):
        min_sum = min(min_sum, sum(nums[left : right + 1]))
        if right == len(nums) - 1 or nums[right + 1] < 0:
            left = right + 1
    return min_sum