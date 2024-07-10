def solve(N):
    return bin(sum(i for i in range(1, N+1) if i % 4 == 0))[2:]