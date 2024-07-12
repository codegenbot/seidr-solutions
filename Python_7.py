def find_substrings(strings, substring):
    return [s for s in strings if substring in s]

check(find_substrings)