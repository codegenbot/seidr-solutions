```
def solve(N):
    total_sum = sum(int(b) for b in bin(N)[2:])
    return format(total_sum, 'b')