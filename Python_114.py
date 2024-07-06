```
try:
    nums = list(map(int, input("Enter space-separated integers: ").split()))
except ValueError:
    print("Invalid input. Please enter valid integers.")
else:
    print(minSubArraySum(nums))
def minSubArraySum(nums):
    if not nums:
        return 0
    min_sum = float('inf')
    left = 0
    current_sum = 0
    for right in range(len(nums)):
        current_sum += nums[right]
        while current_sum > 0 and left <= right:
            min_sum = min(min_sum, current_sum)
            current_sum -= nums[left]
            left += 1
    return min_sum if min_sum != float('inf') else 0