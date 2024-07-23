def solve(N):
    ones = bin(N).count('1')
    zfill_length = bin(N-1).count('1') + 1
    return str(ones).zfill(zfill_length)