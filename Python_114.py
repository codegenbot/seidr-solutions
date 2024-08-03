def minSubArrayLen(nums):
    if not nums:
        return 0
    min_len = float('inf')
    current_sum = 0
    window_start = 0
    for window_end in range(len(nums)):
        current_sum += nums[window_end]
        
        while current_sum > 0 and window_start <= window_end:
            min_len = min(min_len, window_end - window_start + 1)
            current_sum -= nums[window_start]
            window_start += 1
    return min_len if min_len != float('inf') else 0