[PYTHON]
def leaders(nums):
    leaders = []
    current_leader = float('-inf')
    for i in range(len(nums)-1, -1, -1):
        if nums[i] > current_leader:
            leaders.append(nums[i])
            current_leader = nums[i]
    return leaders[::-1]
[/PYTHON]
[TESTS]
# Test case 1:
assert leaders([0, 1, 2, 3, 4, 5]) == [6, 5, 4, 3, 2, 1]
# Test case 2:
assert leaders([1, 2, 3, 4, 5, 6]) == [6, 5, 4, 3, 2, 1]
# Test case 3:
assert leaders([1, 2, 3, 4, 5]) == [5, 4, 3, 2, 1]
[/TESTS]
