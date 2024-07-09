def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = nums[0]
    current_sum = 0
    left = 0
    for right in range(len(nums)):
        current_sum += nums[right]
        while current_sum > min_sum and left <= right:
            min_sum = min(min_sum, current_sum)
            current_sum -= nums[left]
            left += 1
    return min_sum if min_sum != nums[0] else 0