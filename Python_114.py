def minSubArraySum(nums):
    if not nums:
        return 0

    min_sum = float('inf')
    for i in range(len(nums)):
        current_sum = 0
        for j in range(i, len(nums)):
            current_sum += nums[j]
            min_sum = min(min_sum, current_sum)
    return min_sum

nums = [2,3,-1,4,-3,1] 
print(minSubArraySum(nums))