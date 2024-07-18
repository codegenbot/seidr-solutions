def solve(s):
    return s.swapcase() if any(char.isalpha() for char in s) else s[::-1]