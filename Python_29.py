def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Example call to the function
result = filter_strings_by_prefix(['apple', 'banana', 'apricot'], 'ap')
print(result)  # Output: ['apple', 'apricot']