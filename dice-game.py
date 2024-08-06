def roll_game(n, m):
    total = n * m
    higher_than_colin = sum(1 for i in range(m) for j in range(i + 1, n + m))
    return higher_than_colin / total if total > 0 else 0.0