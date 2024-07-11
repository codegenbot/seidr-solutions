def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

# Call the function with appropriate arguments
strings = ["apple", "banana", "orange"]
substring = "an"
result = filter_strings(strings, substring)
print(result)