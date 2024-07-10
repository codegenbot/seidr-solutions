```
def solve(N):
    while N % 2 == 0:
        N //= 2
    if N != 1:
        return "Not a power of 2"
    result = str(int(bin(sum(int(i) for i in str(bin(N)[2:]))), 2))
    return result