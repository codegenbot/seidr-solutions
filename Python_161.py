def solve(s):
    return s[::-1] if not any(c.isalpha() for c in s) else ''.join([c.lower() if c.isupper() else c.upper() if c.islower() else c for c in s])[::-1]