def filter_strings(strings, substring):
    return [s for s in strings if substring in s]


# Call the function with required parameters
filtered_strings = filter_strings(["apple", "banana", "orange"], "an")
print(filtered_strings)