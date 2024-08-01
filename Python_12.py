def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = max(len(s) for s in strings)
    return next(s for s in strings if len(s) == max_length)

# Read list of strings from user input
strings = input("Enter a list of strings separated by spaces: ").split()

# Call the function and print the result
result = longest(strings)
print(result)