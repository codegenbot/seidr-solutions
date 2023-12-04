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
assert find_pair([10, 20, 30], 40) == [10, 30]
# Test case 3:
assert find_pair([5, 7, 12], 9) == [5, 4]
[/TESTS]
