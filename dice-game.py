def dice_game(n, m):
    total = n * m
    if n == m:
        return 0.5
    else:
        sum1 = 0
        for i in range(1, min(n, m) + 1):
            sum1 += max(0, (n - i) * (m - i))
        sum2 = (n - m) * (m + 1) if n >= m else 0
        return (sum1 + sum2) / total