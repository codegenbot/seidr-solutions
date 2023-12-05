[PYTHON]
def basement(nums):
    """
    Given a vector of integers, return the first index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.
    If there is no such index, return -1.
    """
    # Initialize variables
    n = len(nums)
    current_sum = 0
    i = 0

    # Loop through the vector and calculate the sum
    while i < n:
        current_sum += nums[i]
        if current_sum < 0:
            return i
        i += 1

    # If there is no negative sum, return -1
    return -1
[/PYTHON]
[TESTS]
# Test case 1:
assert basement([1, 2, 3]) == -1
# Test case 2:
assert basement([-1, 2, 3]) == 0
# Test case 3:
assert basement([1, 2, -3]) == 2
# Test case 4:
assert basement([1, -2, 3]) == 1
# Test case 5:
assert basement([-1, -2, -3]) == 0
[/TESTS]
