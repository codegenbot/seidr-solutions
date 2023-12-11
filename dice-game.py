```
def get_probability(n, m):
    total = n * m
    peter_higher = 0
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if i > j:
                peter_higher += 1
    return peter_higher / total
```