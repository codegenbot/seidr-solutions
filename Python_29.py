def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example usage
strings = ["apple", "banana", "apricot", "cherry"]
prefix = "ap"
result = filter_strings_by_prefix(strings, prefix)
print(result)  # Output: ['apple', 'apricot']