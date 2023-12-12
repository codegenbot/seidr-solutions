[PYTHON]
def compare_one(a, b):
    if isinstance(a, int) and isinstance(b, float):
        return a > b
    elif isinstance(a, float) and isinstance(b, int):
        return a > b
    elif isinstance(a, str) and isinstance(b, str):
        try:
            x = float(a)
            y = float(b)
            return x > y
        except ValueError:
            return "None"
    else:
        return "None"
[/PYTHON]
[TESTS]
# Test case 1:
assert compare_one(1, 2.0) == False
# Test case 2:
assert compare_one(2.0, 1) == True
# Test case 3:
assert compare_one("3", "2") == "None"
# Test case 4:
assert compare_one(1, "2") == "None"
# Test case 5:
assert compare_one("1", "2.0") == "None"
[/TESTS]
