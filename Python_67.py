def fruit_distribution(s, n):
    return n - sum(1 for fruit in s.split() if fruit.isdigit())