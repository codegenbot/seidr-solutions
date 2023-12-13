[PYTHON]
def get_strongest_extension(input_string, extensions):
    # Initialize variables
    strongest_extension = ""
    current_extension = ""
    strength = 0

    # Iterate through the input string
    for i in range(len(input_string)):
        # Check if the current character is a dot
        if input_string[i] == ".":
            # If it is a dot, update the current extension
            current_extension = input_string[i + 1:]
            # Calculate the strength of the current extension
            strength = len(current_extension)
            # Check if the strength is greater than the previous strongest extension
            if strength > len(strongest_extension):
                # If it is, update the strongest extension
                strongest_extension = current_extension

    return strongest_extension
[/PYTHON]
[TESTS]
# Test case 1:
assert get_strongest_extension("Sp", ['671235', 'Bb']) == "Sp.671235"
# Test case 2:
assert get_strongest_extension("Sp", ['671235', 'Bb', 'Cc']) == "Sp.671235"
# Test case 3:
assert get_strongest_extension("Sp", ['671235', 'Bb', 'Cc', 'Dd']) == "Sp.671235"
[/TESTS]
```