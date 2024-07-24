def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

# Call this function with appropriate arguments
filtered_strings = filter_strings(strings, prefix)