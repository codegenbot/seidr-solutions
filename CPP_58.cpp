[PYTHON]
def issame(a: set, b: set) -> bool:
    return all(x in a for x in b) and all(x in b for x in a)

assert issame({4, 3, 2, 8}, {}) == False
[/PYTHON]
[TESTS]
# Test case 1:
assert issame({4, 3, 2, 8}, {}) == False
# Test case 2:
assert issame({4, 3, 2, 8}, {4, 3, 2, 8}) == True
# Test case 3:
assert issame({4, 3, 2, 8}, {4, 3, 2, 8, 10}) == False
[/TESTS]

Note that the `issame` function returns a boolean value indicating whether the two sets are equal or not. The `all` function is used to check if all elements in one set are present in the other set, and vice versa.