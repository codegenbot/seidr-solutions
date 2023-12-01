def solve(s):
    return ''.join([c.lower() if c.isupper() else c.upper() if c.islower() else c for c in s])[::-1]