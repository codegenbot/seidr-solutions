def get_probability(n, m):
    total_prob = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                total_prob += 1 / (m * n)
    return total_prob