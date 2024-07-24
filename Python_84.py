```
def solve(N):
    return bin((sum(int(b) for b in str(N))) << (N.bit_length() - 1))[2:]