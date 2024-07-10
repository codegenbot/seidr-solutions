```
def solve(N):
    result = str(sum(int(i) for i in str(sum(int(i) for i in str(N)))))
    return result