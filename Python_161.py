def solve(s):
    return ''.join([char.swapcase() if char.isalpha() else char for char in s]) if any(char.isalpha() for char in s) else s[::-1]