[PYTHON]
def find_pair(nums, target):
    seen = set()
    for num in nums:
        if target - num in seen:
            return True
        seen.add(num)
    return False
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == True
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 10) == False
# Test case 3:
assert find_pair([1, 2, 3, 4, 5], 11) == False
[/TESTS]
