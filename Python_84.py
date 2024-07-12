def solve(N):
    return bin(sum([int(b) for b in str(N)[1:]])).replace("0b", "")