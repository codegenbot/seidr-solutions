def solve(N):
    return bin(sum(int(i, 2) for i in str(bin(N)[2:])))