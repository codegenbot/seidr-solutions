```
def solve(N):
    return bin(N ^ ((1 << (N.bit_length() + 1)) - 1))[2:]