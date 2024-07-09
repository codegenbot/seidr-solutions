def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Call the function with necessary arguments
strings = ['apple', 'banana', 'orange', 'grape']
substring = 'an'
result = filter_strings(strings, substring) 

result