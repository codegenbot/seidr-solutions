def solve(N):
    return str(bin(sum(int(i) for i in str(N)))[2:])