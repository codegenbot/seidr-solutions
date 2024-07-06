```
def solve(N):
    res = []
    for i in range(1, N+1):
        if N % i == 0:
            res.append(str(i))
    return ', '.join(res)