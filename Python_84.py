```
def solve(N):
    return bin(sum(int(digit) for digit in bin(N)[2:]))[2:]