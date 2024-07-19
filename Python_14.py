def prefixes(s):
    return [s[:i+1] for i in range(len(s)]

all_prefixes = prefixes(input())
print(all_prefixes)