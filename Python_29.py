def filter_strings(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

result = filter_strings(strings, prefix)