def solve(N):
    return "0" if N == 0 else str(bin(sum(int(i) for i in str(N))))[2:]