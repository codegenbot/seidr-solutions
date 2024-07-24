def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

filtered_list = filter_strings(strings, substring)