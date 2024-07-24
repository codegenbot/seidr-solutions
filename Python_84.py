def solve(N):
    if N > 0:
        result = bin(sum(int(i) for i in str(bin(N)[2:])))
        return result[2:]
    else:
        return "0"