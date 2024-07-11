def solve(N):
    return bin(sum([int(x) for x in bin(N)[2:]]))