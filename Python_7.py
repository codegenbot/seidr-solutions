def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = ["apple", "banana", "cherry", "date"]
substring = "an"

filtered_list = filter_strings(strings, substring)