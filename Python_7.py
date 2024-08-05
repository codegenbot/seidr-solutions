def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

def check(function):
    strings = ["apple", "banana", "cherry"]
    substring = "app"
    return function(strings, substring)

check(filter_strings)