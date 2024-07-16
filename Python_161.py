def solve(s):
    return ''.join([c.upper() if c.isalpha() and c.islower() else c.lower() if c.isalpha() and c.isupper() else c for c in s])[::-1]