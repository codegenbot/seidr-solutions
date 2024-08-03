def solve(N):
    return bin(sum(int(b) for b in format(N, 'b')))[2:]