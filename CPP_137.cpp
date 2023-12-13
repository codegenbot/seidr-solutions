[PYTHON]
def compare_one(a, b):
    if isinstance(a, int) and isinstance(b, (int, float)):
        return a if a > b else b
    elif isinstance(a, float) and isinstance(b, (int, float)):
        return a if a > b else b
    elif isinstance(a, str) and isinstance(b, str):
        try:
            return a if float(a) > float(b) else b
        except ValueError:
            return "None"
    else:
        return "None"
[/PYTHON]
[TESTS]
# Test case 1:
assert compare_one(1, 2) == 2
# Test case 2:
assert compare_one(1.5, 2) == 2
# Test case 3:
assert compare_one("2", "3") == "3"
# Test case 4:
assert compare_one("2", 3) == "3"
# Test case 5:
assert compare_one(1, "2") == "2"
[/TESTS]
