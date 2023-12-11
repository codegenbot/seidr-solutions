[PYTHON]
def find_pair(arr, target):
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if arr[i] + arr[j] == target:
                return [arr[i], arr[j]]
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([5, 7], 12) == [5, 7]
# Test case 2:
assert find_pair([2500, 6352], 8852) == [2500, 6352]
# Test case 3:
assert find_pair([-14, 5], -9) == [-14, 5]
# Test case 4:
assert find_pair([40, -19], 21) == [40, -19]
# Test case 5:
assert find_pair([-4, 4], 0) == [-4, 4]
[/TESTS]
