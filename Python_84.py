```
def solve(N):
    return bin(sum(int(digit, 2) for digit in str(bin(N)[2:])))[2:]