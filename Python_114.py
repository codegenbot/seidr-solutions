def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    left = 0
    current_sum = 0
    for right in range(len(nums)):
        current_sum += nums[right]
        while right < len(nums) and current_sum > 0:
            current_sum -= nums[left]
            left += 1
        if current_sum <= 0:
            min_sum = min(min_sum, current_sum)
    return min_sum if min_sum != float('inf') else 0