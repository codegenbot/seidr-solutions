def solve(N):
    result = str(bin(sum(int(i) for i in str((i%2)for i in range(N+1))))[2:])
    return result