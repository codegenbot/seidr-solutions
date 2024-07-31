def solve(N):
    return bin(sum([int(x) for x in bin(N)[2:].zfill(16)]))