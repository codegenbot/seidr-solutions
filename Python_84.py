```
def solve(N):
    if N > 0:
        return bin(N)[2:]
    else:
        return "0"