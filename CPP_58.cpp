[PYTHON]
def issame(a: set, b: set) -> bool:
    return all(x in a for x in b) and all(x in b for x in a)

def common(a: set, b: set) -> set:
    return {x for x in a if x in b}

assert issame(common({4, 3, 2, 8}, {10}), set()) == False
[/PYTHON]
[TESTS]
# Test case 1:
assert issame(common({4, 3, 2, 8}, {10}), set()) == False
# Test case 2:
assert issame(common({4, 3, 2, 8}, {4, 3, 2, 8}), set()) == True
# Test case 3:
assert issame(common({4, 3, 2, 8}, {4, 3, 2, 8, 10}), set()) == False
[/TESTS]
```