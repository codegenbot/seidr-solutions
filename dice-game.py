def roll_probability(n, m):
    return sum(1 / i for i in range(min(n, m), n + 1)) / (n * m)