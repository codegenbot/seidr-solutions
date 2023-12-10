[PYTHON]
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [nums[i], nums[j]]
            elif nums[i] - nums[j] == target:
                return [nums[i], -nums[j]]
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([5, 7], 12) == [5, 7]
# Test case 2:
assert find_pair([-5, 7], 12) == [-5, 7]
# Test case 3:
assert find_pair([5, -7], 12) == [5, -7]
# Test case 4:
assert find_pair([-5, -7], 12) == [-5, -7]
[/TESTS]
