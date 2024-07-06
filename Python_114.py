```
def minSubArraySum(nums):
    if len(nums) == 0:
        return 0
    
    min_sum = float('inf')
    current_sum = 0
    
    for num in nums:
        current_sum += num
        min_sum = min(min_sum, current_sum)
        
        if current_sum < 0:
            current_sum = 0
            
    return min_sum