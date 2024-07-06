def solve(N):
    bin_str = bin(N)[2:]
    return '1' if sum(int(b) for b in bin_str) % 2 == 0 else '0'