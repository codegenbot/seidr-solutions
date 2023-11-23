def solve(s):
    if not any(c.isalpha() for c in s):
        return s
    else:
        return ''.join([c.lower() if c.isupper() and c.isalpha() else c.upper() if c.islower() and c.isalpha() else c for c in s])