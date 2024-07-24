```
def solve(N):
    return bin(format(sum(int(i) for i in str(N)), 2))[2:]