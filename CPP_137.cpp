[PYTHON]
def compare_one(a, b):
    if isinstance(a, int) and isinstance(b, float):
        return "int"
    elif isinstance(a, float) and isinstance(b, int):
        return "float"
    else:
        return "None"
[/PYTHON]
[TESTS]
# Test case 1:
assert compare_one(1, 2.0) == "int"
# Test case 2:
assert compare_one(2.0, 1) == "float"
# Test case 3:
assert compare_one(1, 1.0) == "None"
[/TESTS]
.
You must only return correct code. Remove any triple quotes, language name or explanations.