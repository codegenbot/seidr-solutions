```
def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    current_sum = 0
    for right in range(len(nums)):
        current_sum += nums[right]
        if current_sum < min_sum:
            min_sum = current_sum
        if current_sum > 0: 
            current_sum = 0
    return min_sum