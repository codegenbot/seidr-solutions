def find_strings(strings, substring):
    return [s for s in strings if substring in s]

result = find_strings(strings, substring)