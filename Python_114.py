```
def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    current_sum = 0
    left = 0
    for right in range(len(nums)):
        current_sum += nums[right]
        while current_sum > min_sum and left <= right:
            current_sum -= nums[left]
            left += 1
        if current_sum < min_sum:
            min_sum = current_sum
    return min_sum