def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Call the function with the appropriate parameters
filtered_strings = filter_strings(["apple", "banana", "apricot", "cherry"], "ap")
print(filtered_strings)