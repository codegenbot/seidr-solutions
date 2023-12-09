[PYTHON]
def minSubArraySum(nums):
    # Initialize variables
    n = len(nums)
    i = 0
    j = 0
    sum = 0
    min_sum = float('inf')

    # Loop through the array
    while i < n:
        # Add the current element to the sum
        sum += nums[i]

        # Check if the sum is less than the minimum sum
        if sum < min_sum:
            # Update the minimum sum and the indices
            min_sum = sum
            j = i + 1

        # Increment the index
        i += 1

    # Return the minimum sum
    return min_sum
[/PYTHON]
[TESTS]
# Test case 1:
assert minSubArraySum([2, 3, 4, 1, 2, 4]) == 1
# Test case 2:
assert minSubArraySum([-1, -2, -3]) == -6
# Test case 3:
assert minSubArraySum([1, 2, 3, 4, 5]) == 1
# Test case 4:
assert minSubArraySum([1, 2, 3, 4, 5, 6, 7, 8, 9]) == 1
[/TESTS]
