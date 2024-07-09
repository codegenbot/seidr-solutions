def solve(s):
    return s.swapcase() if any(c.isalpha() for c in s) else s[::-1]