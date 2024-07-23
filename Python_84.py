def solve(N):
    ones = bin(N).count('1')
    return str(ones).zfill(bin(N-1).count('1') + 1)