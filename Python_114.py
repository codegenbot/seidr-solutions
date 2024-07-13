def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    current_sum = 0
    for start_index in range(len(nums)):
        for end_index in range(start_index, len(nums)):
            current_sum = sum(nums[start_index:end_index+1])
            min_sum = min(min_sum, current_sum)
    return min_sum if min_sum != float('inf') else 0