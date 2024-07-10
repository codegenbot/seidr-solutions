```
def solve(N):
    result = bin(sum(int(i) for i in str(N)))[2:]
    return result