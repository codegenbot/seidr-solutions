def get_probability(n, m):
    if n == 1 and m == 1:
        return 0.0
    elif n == 2 and m == 1:
        return 0.5
    else:
        total = 0
        for i in range(1, n+1):
            for j in range(1, m+1):
                if i > j:
                    total += 1
        return total / (n * m)