```
def solve(N):
    return str(bin(sum(int(i) for i in str(bin(N)[2:]))))[2:]