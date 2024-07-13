def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    current_sum = 0
    for i in range(len(nums)):
        current_sum += nums[i]
        while current_sum < 0:
            current_sum -= nums[i]
            i -= 1
        min_sum = min(min_sum, current_sum)
    return min_sum