```
def solve(N):
    total = sum(int(i) for i in str(N))
    return bin(total)[2:]