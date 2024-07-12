def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = ["apple", "banana", "cherry"]
substring = "an"
result = filter_strings(strings, substring)
print(result)