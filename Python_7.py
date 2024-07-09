def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Calling the function
filtered_list = filter_strings(['apple', 'banana', 'pear', 'kiwi'], 'a')
print(filtered_list)