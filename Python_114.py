```
def minSubArraySum(nums):
    if sum(nums) < 0:
        return sum(nums)
    min_sum = float('inf')
    window_sum = 0
    left = 0
    for right in range(len(nums)):
        window_sum += nums[right]
        while window_sum > min_sum and left <= right:
            window_sum -= nums[left]
            left += 1
        if window_sum < min_sum:
            min_sum = window_sum
    return min_sum