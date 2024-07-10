```
def solve(N):
    if N > 1:
        return bin(N)[2:]
    else:
        return "0"