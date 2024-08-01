```
def minSubArraySum(nums):
    min_sum = float('inf')
    current_sum = 0
    for num in nums:
        current_sum += num
        if current_sum < min_sum:
            min_sum = current_sum
        elif current_sum > 0:
            current_sum = 0
    return min_sum if min_sum != float('inf') else 0