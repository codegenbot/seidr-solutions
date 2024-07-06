```
def all_prefixes(s):
    prefixes = [s[:i+1] for i in range(len(s))]
    return prefixes

print(all_prefixes("hello"))