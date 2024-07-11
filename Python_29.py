def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Call the function with the correct name
filtered_strings = filter_strings(strings, prefix)