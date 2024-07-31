def solve(N):
    return bin(sum(int(i) for i in str(bin(N)[2:]))) [2:].lstrip("0") or "0"