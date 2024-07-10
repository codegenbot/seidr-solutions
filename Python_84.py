def solve(N):
    result = str(int(bin(sum(int(i) for i in str(bin(N)[2:]))), 2))
    return result