def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Define 'strings' and 'substring'
strings = ['apple', 'banana', 'orange']
substring = 'an'

# Call the function with the correct name
filtered_strings = filter_strings(strings, substring)