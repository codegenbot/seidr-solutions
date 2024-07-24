def solve(N):
    total = sum(int(b) for b in bin(N)[2:].replace(" ", "").replace("-", ""))
    return bin(total)[2:]