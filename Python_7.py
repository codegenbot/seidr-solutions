def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

filtered_strings = filter_strings(strings, substring)