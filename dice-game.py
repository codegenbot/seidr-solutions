def roll_probability(n, m):
    return sum(
        1 / i / math.comb(m + i - 1, i) for i in range(1, min(n, m) + 1)
    ) / math.comb(n + m - 2, n - 1)