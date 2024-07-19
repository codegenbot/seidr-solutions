def prefixes(s):
    return [s[:i+1] for i in range(len(s))]

prefixes = prefixes(input())
print(prefixes)