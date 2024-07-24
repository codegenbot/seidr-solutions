```
def solve(N):
    return str(bin(N))[2:] if N > 0 else "0"