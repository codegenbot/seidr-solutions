```
def probability(n, m):
    return (min(n-1, m) + 1) / n / m if n != m else 0.5