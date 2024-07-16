```
def solve(N):
    return "0" if bin(N)[2:].count('0') == len(bin(N)[2:]) else bin(N)[2:]