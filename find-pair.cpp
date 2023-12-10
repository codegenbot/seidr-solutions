[PYTHON]
def find_pair(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    seen = set()
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [nums[i], nums[j]]
        seen.add(nums[i])
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == [1, 5]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 10) == []
# Test case 3:
assert find_pair([-1, 0, 1, 2, -1, 4], 1) == [-1, 0]
[/TESTS]
