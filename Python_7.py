def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Call the function with required parameters
strings = ["apple", "banana", "cherry"]
substring = "a"
filtered_strings = filter_strings(strings, substring)
filtered_strings