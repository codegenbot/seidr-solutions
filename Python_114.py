```
def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    current_sum = 0
    start_index = 0
    for end_index in range(len(nums)):
        current_sum += nums[end_index]
        while start_index <= end_index and current_sum > 0:
            min_sum = min(min_sum, current_sum)
            current_sum -= nums[start_index]
            start_index += 1
    return min_sum if min_sum != float('inf') else 0