def solve(N):
    if N == 0:
        return "0"
    if N < 0:
        return "-" + bin(abs(N))[2:]
    else:
        return "0" + bin(N)[2:]