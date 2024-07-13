```
def solve(N):
    total = 0
    while N > 0:
        total += N % 2
        N //= 2
    return bin(total)[2:]