def solve(N):
    if N == 0:
        return "0"
    elif N < 0:
        return "-" + bin(abs(N))[2:]
    else:
        s = bin(N)[2:]
        return "1" if len(s) == 1 else s