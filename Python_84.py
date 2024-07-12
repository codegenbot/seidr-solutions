def solve(N):
    return bin(sum(int(b) for b in bin(N)[2:].split("0"))).replace("0b", "")