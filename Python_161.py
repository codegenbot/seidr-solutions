def solve(s):
    return "".join([c.swapcase() if c.isalpha() else c for c in s][::-1])