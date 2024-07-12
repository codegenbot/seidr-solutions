def longest(strings):
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))


# Read input from the user
strings = input("Enter a list of strings separated by space: ").split()

# Call the function with the input
result = longest(strings)
print(result)