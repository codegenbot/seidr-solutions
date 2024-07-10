def solve(N):
    result = str(bin(sum(1 if i % 2 else 0 for i in range(1, N+1)))[2:])
    return result