def solve(s):
    return ''.join([char.swapcase() if char.isalpha() else char for char in s])[::-1]