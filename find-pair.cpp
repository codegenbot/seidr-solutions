[PYTHON]
def findPair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert(findPair([1, 2, 3, 4, 5], 7) == [2, 5]);
# Test case 2:
assert(findPair([1, 2, 3, 4, 5], 8) == [3, 5]);
# Test case 3:
assert(findPair([1, 2, 3, 4, 5], 9) == [4, 5]);
[/TESTS]
```