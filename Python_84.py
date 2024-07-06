def solve(N):
    return bin(sum(int(x) for x in str(bin(N)[2:]))) if N > 0 else ""