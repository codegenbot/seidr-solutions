def filter_strings_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

check(filter_strings_by_prefix)