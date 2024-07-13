def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    current_sum = 0
    for num in nums:
        current_sum += num
        if current_sum < 0:
            current_sum = 0
        else:
            min_sum = min(min_sum, current_sum)
    return min_sum