def get_probability(n, m):
    from math import factorial
    peter_rolls_higher = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                peter_rolls_higher += 1
    return peter_rolls_higher / (n * m)