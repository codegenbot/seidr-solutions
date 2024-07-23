def solve(N):
    return str(bin(N & ((1 << N.bit_length()) - 1)).count('1'))