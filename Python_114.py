```
def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    window_start = 0
    current_sum = 0
    
    for window_end in range(len(nums)):
        current_sum += nums[window_end]
        
        while current_sum > min_sum and window_start <= window_end:
            min_sum = current_sum
            current_sum -= nums[window_start]
            window_start += 1
            
    return min_sum if min_sum != float('inf') else 0