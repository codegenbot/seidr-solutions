def dice_game(n, m):
    total = (n + m) ** 2
    higher_outcomes = sum(min(i, j) < j for i in range(1, n+1) for j in range(1, m+1))
    return higher_outcomes / total