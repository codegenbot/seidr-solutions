def solve(N):
    while N > 1:
        N = sum(int(i) for i in bin(N)[2:])
    return N