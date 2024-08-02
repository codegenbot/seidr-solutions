def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)] 

# Call the function with appropriate parameters
strings = ["apple", "banana", "orange", "pear"]
prefix = "b"
print(filter_strings(strings, prefix))