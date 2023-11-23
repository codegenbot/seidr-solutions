def filter_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Read input values
strings = input().split()
prefix = input()

# Call the function and print the result
result = filter_by_prefix(strings, prefix)
print(result)