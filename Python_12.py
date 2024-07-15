def longest(strings):
    return max(strings, key=lambda x: (len(x), x)) if strings and all(isinstance(s, str) for s in strings) else None