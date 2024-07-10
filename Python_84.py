```
def solve(N):
    if N > 1:
        return bin(N)[2:].zfill(16)
    else:
        return "0"