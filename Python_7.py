def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Call the function with required parameters
filter_strings(["apple", "banana", "cherry"], "an")