[PYTHON]
def get_strongest_extension(input_string, extensions):
    strength = 0
    for i in range(len(input_string)):
        if input_string[i] == ".":
            current_extension = input_string[i + 1:]
            strength = len(current_extension)
            if strength > len(extensions):
                return current_extension
    return None
[/PYTHON]
[TESTS]
# Test case 1:
assert get_strongest_extension("Sp", ["671235", "Bb"]) == "Sp.671235"
# Test case 2:
assert get_strongest_extension("Sp", ["671235", "Bb", "Cc"]) == "Sp.671235"
# Test case 3:
assert get_strongest_extension("Sp", ["671235", "Bb", "Cc", "Dd"]) == "Sp.671235"
[/TESTS]
```