def minSubArraySum(nums):
    if not nums:
        return 0
    
    min_sum = float('inf')
    window_sum = 0
    
    for i in range(len(nums)):
        window_sum += nums[i]
        
        if window_sum > 0:
            min_sum = min(min_sum, window_sum)
            
        while window_sum > 0 and i < len(nums) - 1:
            window_sum -= nums[i]
            i += 1
    
    return min_sum