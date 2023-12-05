[PYTHON]
def find_pair(nums, target):
    left = 0
    right = len(nums) - 1
    while left < right:
        if nums[left] + nums[right] == target:
            return [nums[left], nums[right]]
        elif nums[left] + nums[right] < target:
            left += 1
        else:
            right -= 1
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == [1, 5]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 10) == []
# Test case 3:
assert find_pair([], 10) == []
[/TESTS]

```