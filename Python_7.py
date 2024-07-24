def filter_strings(substring, strings):
    return [s for s in strings if substring in s]

# Call the function with substring and strings data
result = filter_strings(substring, strings)