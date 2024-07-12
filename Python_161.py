def solve(s):
    return ''.join([c.swapcase() if c.isalpha() else c for c in s]) if any(char.isalpha() for char in s) else s[::-1]