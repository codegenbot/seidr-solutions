def filter_strings(prefix, strings):
    return [s for s in strings if s.startswith(prefix)]

result = filter_strings(prefix, strings)