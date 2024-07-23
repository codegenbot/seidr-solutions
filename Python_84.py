```
def solve(N):
    return bin(sum(int(i) for i in str(bin(abs(N))[2:]))) if N > 0 else "0"