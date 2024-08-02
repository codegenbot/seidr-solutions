```
def solve(N):
    while N % 2 == 0:
        N //= 2
    return bin(N)[2:]