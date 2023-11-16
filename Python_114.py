
def minSubArraySum(nums):
    """
    Given an array of integers nums, find the minimum sum of any non-empty sub-array
    of nums.
    Example
    minSubArraySum([2, 3, 4, 1, 2, 4]) == 1
    minSubArraySum([-1, -2, -3]) == -6
    """
    min_sum = 0
    for i in range(len(nums)):
        for j in range(i, len(nums)):
            if min_sum == 0:
                min_sum = sum(nums[i:j + 1])
            elif sum(nums[i:j + 1]) < min_sum:
                min_sum = sum(nums[i:j + 1])
    return min_sum


print(minSubArraySum([2, 3, 4, 1, 2, 4]))
print(minSubArraySum([-1, -2, -3]))
