def solve(N):
    result = str(bin(sum(int(i)%2 for i in range(1,N+1)))[2:])
    return result