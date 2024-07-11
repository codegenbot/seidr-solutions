def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = ["apple", "banana", "orange"]
substring = "an"
result = filter_strings(strings, substring)
print(result)