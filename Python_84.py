```Python
def solve(N):
    if N > 0:
        return bin(int(bin(N)[2:][::-1]))[2:]
    else:
        return "0"