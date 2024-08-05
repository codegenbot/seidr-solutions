def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

def check(filter_strings):
    strings = ["apple", "banana", "cherry"]
    substring = "an"
    return filter_strings(strings, substring)