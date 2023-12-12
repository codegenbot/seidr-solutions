[PYTHON]
def compare_one(a, b):
    if isinstance(a, int) and isinstance(b, (int, float)):
        return a if a > b else b
    elif isinstance(a, float) and isinstance(b, (int, float)):
        return a if a > b else b
    elif isinstance(a, str) and isinstance(b, (int, float, str)):
        try:
            x = float(a)
            if isinstance(b, int):
                return a if x > b else b
            elif isinstance(b, float):
                return a if x > b else b
            else:
                return "None"
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
assert compare_one(1.5, 2.5) == 2.5
# Test case 4:
assert compare_one("2", 1.5) == "2"
# Test case 5:
assert compare_one("2", "1.5") == "2"
[/TESTS]
