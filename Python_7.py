def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Test the function
strings = ['apple', 'banana', 'cherry', 'orange']
substring = 'an'
filtered_strings = filter_strings(strings, substring)
print(filtered_strings)