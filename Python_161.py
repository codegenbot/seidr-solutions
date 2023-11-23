def solve(s):
    return ''.join([c.lower() if c.isupper() else c.upper() if c.islower() else c for c in s])[::-1] if any(c.isalpha() for c in s) else s[::-1]