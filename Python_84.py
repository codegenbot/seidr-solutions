```
def solve(N):
    if N > 1:
        return str(bin(N))[2:] or "0"
    else:
        return "1"