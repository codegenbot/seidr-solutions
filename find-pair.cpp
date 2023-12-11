[PYTHON]
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [nums[i], nums[j]]
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 7) == [2, 5]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 9) == [3, 6]
# Test case 3:
assert find_pair([1, 2, 3, 4, 5], 11) == [4, 7]
[/TESTS]
