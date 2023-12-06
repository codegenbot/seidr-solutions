[PYTHON]
def issame(a: set, b: set) -> bool:
    return all(x in a for x in b) and all(x in b for x in a)

def common(a: set, b: set) -> set:
    return a.intersection(b)

assert issame({4, 3, 2, 8}, {}) == False
# Test case 2:
assert issame({4, 3, 2, 8}, {4, 3, 2, 8}) == True
# Test case 3:
assert issame({4, 3, 2, 8}, {4, 3, 2, 8, 10}) == False
[/PYTHON]
[TESTS]
# Test case 1:
assert common({4, 3, 2, 8}, {4, 3, 2, 8}) == {4, 3, 2, 8}
# Test case 2:
assert common({4, 3, 2, 8}, {4, 3, 2, 8, 10}) == {4, 3, 2, 8}
# Test case 3:
assert common({4, 3, 2, 8}, {4, 3, 2, 8, 10, 12}) == {4, 3, 2, 8}
[/TESTS]
```