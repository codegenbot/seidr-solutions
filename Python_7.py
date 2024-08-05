def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Call the function with the required parameters
filtered_list = filter_strings(strings, substring)