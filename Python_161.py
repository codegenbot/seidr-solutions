def solve(s):
    return s.lower()[::-1] if not s.isalpha() else ''.join([c.lower() if c.isupper() else c.upper() if c.islower() else c for c in s])[::-1]