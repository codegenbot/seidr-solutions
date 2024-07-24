def solve(N):
    return bin(sum(int(i) for i in str(bin(N)[2:]))) if N > 0 else "0"