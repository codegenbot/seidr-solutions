def solve(N):
    return bin(sum([int(i) for i in bin(N)[2:].zfill(4)]))