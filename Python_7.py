def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

result = filter_strings(strings, substring)