def solve(N):
    return bin(sum(int(i) for i in str(N))) if N > 0 else ""