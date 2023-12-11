[PYTHON]
def leaders(nums):
    leaders = []
    max_so_far = float('-inf')
    for i in range(len(nums)-1, -1, -1):
        if nums[i] >= max_so_far:
            leaders.append(nums[i])
            max_so_far = nums[i]
    return leaders
[/PYTHON]
[TESTS]
# Test case 1:
assert leaders([1, 2, 3, 4, 5]) == [5, 4, 3, 2, 1]
# Test case 2:
assert leaders([1, 2, 3, 4, 5, 6]) == [6, 5, 4, 3, 2, 1]
# Test case 3:
assert leaders([1, 2, 3, 4, 5, 6, 7]) == [7, 6, 5, 4, 3, 2, 1]
[/TESTS]
