def solve(N):
    return str(int(bin(N).count("1"))).zfill(len(str(2 ** len(str(N)) - 1)))