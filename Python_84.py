```
def solve(N):
    return bin(sum(int(b) for b in str(format(N, 'b'))))[2:]