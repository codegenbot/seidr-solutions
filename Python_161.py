def solve(s):
    return s[::-1] if not any(c.isalpha() for c in s) else ''.join([c.lower() if c.isupper() and c.isalpha() else c.upper() if c.islower() and c.isalpha() else c for c in s])[::-1]