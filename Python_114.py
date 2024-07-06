```
def minSubArraySum(nums):
    min_sum = float('inf')
    window_sum = 0
    for num in nums:
        window_sum += num
        min_sum = min(min_sum, window_sum)
        if window_sum > 0:
            window_sum -= min(num, window_sum)
    return min_sum