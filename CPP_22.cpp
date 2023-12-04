[PYTHON]
def issame(a, b):
    if len(a) != len(b):
        return False
    for i in range(len(a)):
        if a[i] != b[i]:
            return False
    return True
[/PYTHON]
[TESTS]
# Test case 1:
assert issame([], [])
# Test case 2:
assert issame([1, 2, 3], [1, 2, 3])
# Test case 3:
assert not issame([1, 2, 3], [1, 2, 4])
[/TESTS]

```