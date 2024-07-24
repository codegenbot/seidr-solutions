```
def solve(N):
    result = sum(int(i) for i in str(bin(N)[2:]))
    return bin(result)[2:]