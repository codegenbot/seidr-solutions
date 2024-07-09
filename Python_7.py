def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Call the function with the necessary arguments
filter_strings(["apple", "banana", "cherry"], "a")