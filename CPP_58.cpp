[PYTHON]
def issame(a, b):
    # compare elements of a and b
    return False

def common(a, b):
    # compare elements of a and b
    return False
[/PYTHON]
[TESTS]
# Test case 1:
assert issame([1, 2, 3], [4, 5, 6]) == False
# Test case 2:
assert issame([1, 2, 3], [1, 2, 3]) == True
# Test case 3:
assert common([1, 2, 3], [4, 5, 6]) == False
# Test case 4:
assert common([1, 2, 3], [3, 4, 5]) == True
[/TESTS]
```