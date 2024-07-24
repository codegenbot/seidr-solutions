def filter_strings(substring, strings):
    return [s for s in strings if substring in s]

result = filter_strings(substring, strings)