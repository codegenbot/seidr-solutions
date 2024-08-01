def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = max(len(s) for s in strings)
    return next(s for s in strings if len(s) == max_length)


# Read input from the user
strings = input("Enter a list of strings separated by spaces: ").split()

# Call the function with the input list of strings
result = longest(strings)
print(result)