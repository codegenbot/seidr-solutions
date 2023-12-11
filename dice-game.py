```
def get_probability(n, m):
    num_ways_peter_higher = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                num_ways_peter_higher += 1
    return num_ways_peter_higher / (n * m)
```