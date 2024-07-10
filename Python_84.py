```
def solve(N):
    if N > 1:
        return bin(N)[2:]  # Remove '0b' prefix
    else:
        return "0"