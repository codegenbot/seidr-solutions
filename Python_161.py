def solve(s):
    return ''.join([c.swapcase() if c.isalpha() else c for c in s])[::-1] if any(c.isalpha() for c in s) else s[::-1]