```
def probability(n, m):
    return sum(i < j for i in range(1, n) for j in range(1, m)) / (n * m)