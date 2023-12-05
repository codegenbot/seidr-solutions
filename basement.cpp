[PYTHON]
def basement(nums):
    """
    Given a vector of integers, return the first index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.
    """
    n = len(nums)
    for i in range(n):
        if sum(nums[:i+1]) < 0:
            return i
    return -1
[/PYTHON]
[TESTS]
# Test case 1:
assert basement([1, 2, 3, 4, 5]) == -1
# Test case 2:
assert basement([-1, 2, 3, 4, 5]) == 0
# Test case 3:
assert basement([1, 2, 3, 4, -5]) == 3
[/TESTS]
