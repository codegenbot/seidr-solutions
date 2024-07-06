```
def solve(N):
    return bin(N)[2:].zfill((N > 0).bit_length())