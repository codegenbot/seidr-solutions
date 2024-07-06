def minSubArraySum(nums):
    if not nums:
        return 0
    current_sum = nums[0]
    min_sum = nums[0]
    for i in range(1, len(nums)):
        if current_sum < 0:
            current_sum = nums[i]
        else:
            current_sum += nums[i]
        min_sum = min(min_sum, current_sum)
    return min_sum