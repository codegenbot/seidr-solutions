def solve(N):
    ones = bin(N).count('1')
    return str(ones).zfill(len(bin(N-1))[-2:])