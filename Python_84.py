```
def solve(N):
    return bin(sum(int(i) for i in str(bin(N)[2:]) if i != '0'))[2:]