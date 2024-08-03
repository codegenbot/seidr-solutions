def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    left = 0
    curr_sum = 0
    for right in range(len(nums)):
        curr_sum += nums[right]
        while curr_sum >= min_sum and left <= right:
            min_sum = min(min_sum, curr_sum)
            curr_sum -= nums[left]
            left += 1
    return min_sum if min_sum != float('inf') else 0