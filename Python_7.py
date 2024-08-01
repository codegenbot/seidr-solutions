def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Call the function with the appropriate function name
output = filter_strings(strings, substring)
print(output)