def solve(N):
    return bin(sum(int(i) for i in str(N).replace(" ", ""))) if N else "0"