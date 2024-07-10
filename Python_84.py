```
def solve(N):
    return format(sum(int(i) for i in str(bin(N)[2:])), 'b')