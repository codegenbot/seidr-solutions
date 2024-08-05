def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example function call
filtered_strings = filter_strings(["apple", "banana", "cherry"], "b")
print(filtered_strings)