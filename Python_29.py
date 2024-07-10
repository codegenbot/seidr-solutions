def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Call the function with the required arguments
result = filter_strings(['apple', 'banana', 'orange', 'kiwi'], 'b')
print(result)