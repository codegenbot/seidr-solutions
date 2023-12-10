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
v = [1, 2, 3, 4, 5]
assert leaders(v) == [5, 4, 3, 2, 1]
# Test case 2:
v = [1, 2, 2, 3, 3, 3]
assert leaders(v) == [3, 2, 1]
# Test case 3:
v = []
assert leaders(v) == []
# Test case 4:
v = [1]
assert leaders(v) == [1]
# Test case 5:
v = [1, 2, 3, 4, 5, 6, 7, 8, 9]
assert leaders(v) == [9, 8, 7, 6, 5, 4, 3, 2, 1]
[/TESTS]
