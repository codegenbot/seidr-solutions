def minSubArraySum(nums):
    if len(nums) == 0:
        return None
    current_sum = nums[0]
    min_sum = current_sum
    for i in range(1, len(nums)):
        current_sum += nums[i]
        if current_sum < min_sum:
            min_sum = current_sum
    return min_sum