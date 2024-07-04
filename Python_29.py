def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Correct function call
filtered_strings = filter_strings_by_prefix(["apple", "banana", "apricot"], "ap")
print(filtered_strings)