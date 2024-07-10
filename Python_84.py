def solve(N):
    if N > 0:
        return str(bin(N))[2:]
    else:
        return "0"