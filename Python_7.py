def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Provide the strings list and substring variable
strings = ["apple", "banana", "cherry"]
substring = "a"

# Call the function with the required parameters
filtered_list = filter_strings(strings, substring)
filtered_list