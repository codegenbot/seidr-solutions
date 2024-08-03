def minSubArrayLen(nums):
    if not nums:
        return 0
    min_len = float('inf')
    current_sum = 0
    left = 0
    for right in range(len(nums)):
        current_sum += nums[right]
        while current_sum > 0 and left <= right:
            min_len = min(min_len, right - left + 1)
            current_sum -= nums[left]
            left += 1
    return min_len