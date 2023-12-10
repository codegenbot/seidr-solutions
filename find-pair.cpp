[PYTHON]
def find_pair(nums, target):
    """
    Given a vector of integers, return the two elements that sum to a target integer.

    :param nums: Vector of integers
    :param target: Target integer
    :return: Indices of the two elements that sum to the target
    """
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([5, 7], 12) == [0, 1]
# Test case 2:
assert find_pair([3, 5, 7], 12) == [1, 2]
# Test case 3:
assert find_pair([1, 2, 3, 4, 5], 12) == [0, 4]
[/TESTS]
