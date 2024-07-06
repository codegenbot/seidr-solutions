```
def solve(N):
    return bin(sum(int(i) for i in str(N)[1::2])) if N > 0 else "0"