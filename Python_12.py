def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

# Read input from the user
input_strings = input("Enter a list of strings separated by spaces: ").split()

# Call the function with the input provided by the user
result = longest(input_strings)
print(result) 