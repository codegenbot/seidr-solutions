[PYTHON]
def find_pair(nums, target):
    """
    Given a list of integers and a target sum, return the first pair of numbers that add up to the target sum.

    If no pair is found, return None.

    :param nums: List of integers
    :param target: Target sum
    :return: First pair of numbers that add up to the target sum, or None if no pair is found
    """
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [nums[i], nums[j]]
    return None
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == [1, 5]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 10) == None
# Test case 3:
assert find_pair([], 10) == None
[/TESTS]
