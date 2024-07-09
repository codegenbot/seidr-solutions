```
def roll_higher(n, m):
    return (n - 1) / (n * m) if n > m else sum((i / m) for i in range(1, m)) / (n * m)