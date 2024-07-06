```
def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    window_sum = 0
    left = 0
    for right in range(len(nums)):
        window_sum += nums[right]
        while window_sum >= min_sum and left <= right:
            min_sum = min(min_sum, window_sum)
            window_sum -= nums[left]
            left += 1
    return min_sum