def longest(strings):
    return max(strings, key=lambda x: (len(x), x)) if strings else None