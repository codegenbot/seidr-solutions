def get_probability(n, m):
    total = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                total += 1
    return total / (n * m)