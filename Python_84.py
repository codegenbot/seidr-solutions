def solve(N):
    if N > 0:
        return bin(sum(int(i) for i in str(bin(N)[2:])))
    else:
        return "0"