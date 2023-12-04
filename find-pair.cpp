[PYTHON]
def find_pair(nums, target):
    for i in range(len(nums)):
        complement = target - nums[i]
        if complement >= 0 and complement in nums:
            return [nums[i], complement]
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([5, 7, 12], 9) == [5, 4]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 6) == [1, 5]
# Test case 3:
assert find_pair([1, 2, 3, 4, 5, 6], 7) == [1, 6]
[/TESTS]
