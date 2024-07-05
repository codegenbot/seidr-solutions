def solve(s):
    if any(c.isalpha() for c in s):
        return "".join(c.swapcase() if c.isalpha() else c for c in s)
    else:
        return s[::-1]