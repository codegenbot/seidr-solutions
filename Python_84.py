```
def solve(N):
    return ''.join('a' if digit == '1' else 'b' for digit in bin(N)[2:])