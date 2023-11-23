def solve(s):
    return ''.join([i.lower() if i.isupper() else i.upper() if i.islower() else i for i in s])[::-1] if any(c.isalpha() for c in s) else s[::-1]