def solve(s):
    if all(not c.isalpha() for c in s):
        return s[::-1]
    else:
        return ''.join([c.lower() if c.isupper() and c.isalpha() else c.upper() if c.islower() and c.isalpha() else c for c in s[::-1]])