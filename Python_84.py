```
def solve(N):
    print(bin(sum(int(i) for i in str(bin(N)[2:]).lstrip('0'))))