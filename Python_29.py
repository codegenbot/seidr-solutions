def filter_by_prefix(strings, prefix):
    return [s for s in strings if s.startswith(prefix)]

strings = input().split()
prefix = input()

result = filter_by_prefix(strings, prefix)
print(result)