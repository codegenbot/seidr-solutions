```
def solve(N):
    if N > 1:
        return bin(N)[2:] or "1"
    else:
        return "0b1"