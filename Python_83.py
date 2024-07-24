def starts_one_ends(n):
    return sum(10**i == 1 or i % 10 == 1 for i in range(10 ** (n - 1), 10**n))