```
def all_prefixes(s):
    return [s[:i+1] for i in range(len(s))]

print(all_prefixes("hello"))