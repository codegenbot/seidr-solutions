def minSubArraySum(nums):
    min_sum = float('inf')
    curr_sum = 0
    for num in nums:
        curr_sum += num
        min_sum = min(min_sum, curr_sum)
        if curr_sum > 0:
            curr_sum = 0
    return min_sum