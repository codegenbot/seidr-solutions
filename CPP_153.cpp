[PYTHON]
def strongest_extension(extensions):
    strength = 0
    strongest_extension = ""
    for extension in extensions:
        if len(extension) > strength:
            strength = len(extension)
            strongest_extension = extension
    return strongest_extension

def main():
    extensions = ["671235", "Bb"]
    input_string = "Sp"
    for i in range(len(input_string)):
        if input_string[i] == '.':
            current_extension = input_string[i+1:]
            strength = int(current_extension)
            if strength > len(extensions):
                return current_extension
    return ""
[/PYTHON]
[TESTS]
# Test case 1:
assert strongest_extension(["671235", "Bb"]) == "671235"
# Test case 2:
assert strongest_extension(["Bb", "671235"]) == "671235"
# Test case 3:
assert strongest_extension(["Bb", "671235", "Sp"]) == "671235"
[/TESTS]
