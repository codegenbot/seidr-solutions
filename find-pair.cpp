[PYTHON]
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == [0, 1]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 10) == []
[/TESTS]
