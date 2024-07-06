```
def solve(N):
    return bin(sum(int(b) for b in bin(N)[2:].replace('1', '0').replace('0', '1')[::-1]))[2:]