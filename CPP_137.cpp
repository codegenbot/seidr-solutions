[PYTHON]
def compare_one(a, b):
    if isinstance(a, int) and isinstance(b, (int, float)):
        return "None"
    elif isinstance(a, float) and isinstance(b, (int, float)):
        return "None"
    elif isinstance(a, str) and isinstance(b, str):
        try:
            float(a)
            float(b)
        except ValueError:
            return "None"
        else:
            return "None" if a == b else a if a > b else b
    else:
        return "None"
[/PYTHON]
[TESTS]
# Test case 1:
assert compare_one(1, 2) == "None"
# Test case 2:
assert compare_one(1.5, 2) == "None"
# Test case 3:
assert compare_one("hello", "world") == "None"
# Test case 4:
assert compare_one("1", "2") == "None"
# Test case 5:
assert compare_one(1, 1.5) == 1
[/TESTS]
