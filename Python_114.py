```
def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    left, right = 0, 0
    current_sum = 0
    while right < len(nums):
        current_sum += nums[right]
        while current_sum > min_sum and left <= right:
            current_sum -= nums[left]
            left += 1
        if current_sum < min_sum:
            min_sum = current_sum
        right += 1
    return min_sum