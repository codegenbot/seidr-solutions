def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

filter_strings(["apple", "banana", "cherry"], "b")