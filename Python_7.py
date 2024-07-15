def find_strings(strings, substring):
    return [s for s in strings if substring in s]

if callable(find_strings):
    result = find_strings(strings, substring)
    print(result)