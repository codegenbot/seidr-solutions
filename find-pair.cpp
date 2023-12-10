[PYTHON]
def find_pair(nums, target):
    """
    Given a list of integers and a target sum, return the indices of the two numbers that add up to the target.
    You may assume that each input would have exactly one solution.
    The function should return an array of two elements, where the first element is the index of the first number and the second element is the index of the second number.
    """
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == [0, 2]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 10) == [1, 3]
# Test case 3:
assert find_pair([1, 2, 3, 4, 5], 9) == [2, 4]
[/TESTS]
