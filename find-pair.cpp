[PYTHON]
def get_pair_sum(nums, target):
    left = 0
    right = len(nums) - 1
    while left < right:
        current_sum = nums[left] + nums[right]
        if current_sum == target:
            return [nums[left], nums[right]]
        elif current_sum < target:
            left += 1
        else:
            right -= 1
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert get_pair_sum([1, 2, 3, 4, 5], 6) == [1, 5]
# Test case 2:
assert get_pair_sum([1, 2, 3, 4, 5], 10) == []
# Test case 3:
assert get_pair_sum([1, 2, 3, 4, 5], 8) == [2, 6]
[/TESTS]
