def solve(N):
    return bin(int(bin(N)[2:]))[2:] if N > 0 else "0"