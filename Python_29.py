def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

filtered_strings = filter_strings(strings, prefix)