[PYTHON]
def fix_spaces(text):
    import re
    return re.sub(r"\s+", "_", text)
[/PYTHON]
[TESTS]
# Test case 1:
assert fix_spaces("hello world") == "hello_world"
# Test case 2:
assert fix_spaces("hello  world") == "hello_world"
# Test case 3:
assert fix_spaces("   hello world  ") == "hello_world"
[/TESTS]
