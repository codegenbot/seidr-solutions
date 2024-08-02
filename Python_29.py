def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]


def check(filter_strings):
    strings = ["apple", "banana", "cherry"]
    prefix = "b"
    result = filter_strings(strings, prefix)
    print(result)


check(filter_strings)