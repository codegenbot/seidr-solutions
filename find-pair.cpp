[PYTHON]
def find_pair(nums, target):
    """
    Given a list of integers and a target sum, return the indices of the two numbers that add up to the target.
    If no such pair exists, return None.
    """
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return None
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == [0, 3]
# Test case 2:
assert find_pair([1, 2, 9, 4, 5], 6) == None
[/TESTS]
