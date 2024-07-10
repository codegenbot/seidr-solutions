def solve(N):
    if N > 1:
        return str(bin(N))[2:] or "1"
    else:
        return "0"