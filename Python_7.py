def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

strings = input().strip().split()
substring = input().strip()
print(filter_strings(strings, substring))