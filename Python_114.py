```
def minSubArraySum(nums):
    if not nums:
        return []
    min_start = 0
    min_end = 0
    left = 0
    current_sum = 0
    for right in range(len(nums)):
        current_sum += nums[right]
        while current_sum > sum(nums[:right+1]) and left <= right:
            current_sum -= nums[left]
            left += 1
        if current_sum < sum(nums[min_start:min_end+1]):
            min_start = left
            min_end = right
    return nums[min_start:min_end+1]