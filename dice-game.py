def dice_game(n, m):
    total = n * m
    if n == m:
        return 0.5

    sum1 = 0
    for i in range(min(n, m) + 1):
        sum1 += max(0, n - i) * (m - i)

    sum2 = 0
    for i in range(min(m, n) + 1):
        sum2 += max(0, m - i) * (n - i)

    return (sum1 if n > m else sum2) / total