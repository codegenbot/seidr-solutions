[PYTHON]
def find_pair(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    seen = set()
    for num in nums:
        if target - num in seen:
            return [num, target-num]
        seen.add(num)
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == [1, 5]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 10) == []
# Test case 3:
assert find_pair([-1, 0, 1, 2, 3], 1) == [-1, 2]
[/TESTS]
