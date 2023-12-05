[PYTHON]
def basement(nums):
    if all(x > 0 for x in nums):
        return -1
    sum = 0
    for i, x in enumerate(nums):
        sum += x
        if sum < 0:
            return i
    return -1
[/PYTHON]
[TESTS]
# Test case 1:
assert basement([1, 2, 3, 4, 5]) == -1
# Test case 2:
assert basement([-1, 2, 3, 4, 5]) == 0
# Test case 3:
assert basement([1, 2, -3, 4, 5]) == 2
# Test case 4:
assert basement([1, 2, 3, 4, -5]) == 4
# Test case 5:
assert basement([-1, -2, -3, -4, -5]) == 0
[/TESTS]
