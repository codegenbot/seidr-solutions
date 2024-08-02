def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))


# Read input from user
strings = input().split()

# Call the function with the input and print the result
print(longest(strings))