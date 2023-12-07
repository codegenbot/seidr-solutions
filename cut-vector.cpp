[PYTHON]
def get_two_subvectors(vec):
    left = 0
    right = 0
    for i in range(1, len(vec)):
        if vec[i] - vec[left] > vec[right] - vec[i]:
            left = i
        else:
            right = i
    return vec[:left], vec[right:]
[/PYTHON]
[TESTS]
# Test case 1:
assert get_two_subvectors([1, 2, 3]) == ([1], [2, 3])
# Test case 2:
assert get_two_subvectors([1, 2, 3, 4]) == ([1, 2], [3, 4])
# Test case 3:
assert get_two_subvectors([1, 2, 3, 4, 5]) == ([1, 2, 3], [4, 5])
[/TESTS]

```