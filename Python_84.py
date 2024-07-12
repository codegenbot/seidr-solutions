def solve(N):
    return bin(sum([int(b) for b in str(N)[2:]])).replace("0b", "")