```
def roll_higher(n, m):
    return sum(1/(n*m) for _ in range(m)) / n