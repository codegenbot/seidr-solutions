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
assert leaders([0]) == [0]
# Test case 2:
assert leaders([1, 0]) == [1, 0]
# Test case 3:
assert leaders([1, 451]) == [1, 451]
# Test case 4:
assert leaders([2, 1000, 0]) == [2, 1000, 0]
# Test case 5:
assert leaders([2, 0, 1000]) == [2, 0, 1000]
[/TESTS]
