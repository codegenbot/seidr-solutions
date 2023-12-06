[PYTHON]
def fix_spaces(text):
    return text.replace("  ", "-").replace(" ", "_")
[/PYTHON]
[TESTS]
# Test case 1:
assert fix_spaces("Example") == "Example"
# Test case 2:
assert fix_spaces("Example 1") == "Example_1"
# Test case 3:
assert fix_spaces(" Example 2") == "_Example_2"
# Test case 4:
assert fix_spaces(" Example   3") == "_Example-3"
[/TESTS]

```