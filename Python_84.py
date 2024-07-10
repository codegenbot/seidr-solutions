```
def solve(N):
    return "1" + bin(N)[2:] if N > 1 else "0"