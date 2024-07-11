```
def solve(N):
    return ''.join(format(i, 'b').zfill(4) for i in str(N))