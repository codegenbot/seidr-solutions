[PYTHON]
def leaders(nums):
    current_leader = float('-inf')
    leaders = []
    for i in range(len(nums)-1, -1, -1):
        if nums[i] >= current_leader:
            leaders.append(nums[i])
            current_leader = nums[i]
    return leaders[::-1]
[/PYTHON]
[TESTS]
# Test case 1:
assert leaders([1, 2, 3, 4, 5]) == [5, 4, 3, 2, 1]
# Test case 2:
assert leaders([10, 5, 6, 4, 8, 9, 7]) == [10, 9, 8, 7, 6, 5, 4]
# Test case 3:
assert leaders([1, 2, 3, 4, 5, 6, 7, 8, 9]) == [9, 8, 7, 6, 5, 4, 3, 2, 1]
[/TESTS]
