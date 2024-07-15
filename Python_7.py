def find_strings(strings, substring):
    return [s for s in strings if substring in s]

check(find_strings)