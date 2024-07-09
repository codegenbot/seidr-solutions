def longest(strings):
    if not strings:
        return None
    longest_str = max(strings, key=len)
    return max(filter(lambda x: len(x) == len(longest_str), strings))


# Read input from user
strings = input().split()

# Call the function and print the result
print(longest(strings))