def solve(N):
    if N < 0:
        return bin(abs(N))[3:]
    else:
        return bin(N)[2:]