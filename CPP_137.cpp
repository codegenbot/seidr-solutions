[PYTHON]
def compare_one(a, b):
    if isinstance(a, int) and isinstance(b, float):
        return a > b
    elif isinstance(a, float) and isinstance(b, int):
        return a > b
    else:
        return "None"
[/PYTHON]
[TESTS]
# Test case 1:
assert compare_one(1, 2.5) == False
# Test case 2:
assert compare_one(2.5, 1) == True
# Test case 3:
assert compare_one(2, 1.5) == True
# Test case 4:
assert compare_one(1.5, 2) == False
[/TESTS]

```