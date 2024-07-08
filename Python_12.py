def longest(strings):
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), strings.index(x)))

# Read input from the user
strings = input().split()

# Call the function with user input
result = longest(strings)
print(result)