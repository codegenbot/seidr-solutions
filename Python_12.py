def longest(strings):
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), strings.index(x)))


# Fix the issue by using input().split() to read input from the user
strings = input().split()

# Call the function with user input
result = longest(strings)
print(result)