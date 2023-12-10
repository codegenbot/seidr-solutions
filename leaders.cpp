[PYTHON]
def leaders(nums):
    result = []
    current_leader = float('-inf')
    for i in range(len(nums)-1, -1, -1):
        if nums[i] >= current_leader:
            result.append(nums[i])
            current_leader = nums[i]
    return result[::-1]
[/PYTHON]
[TESTS]
# Test case 1:
assert leaders([1, 2, 3, 4, 5]) == [5, 4, 3, 2, 1]
# Test case 2:
assert leaders([100, 10, 1]) == [100, 10, 1]
# Test case 3:
assert leaders([5, 4, 3, 2, 1]) == [5, 4, 3, 2, 1]
[/TESTS]
