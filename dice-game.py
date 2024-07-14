def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m+1, n+m) for j in range(1, min(m, n)))
    colin_wins = sum(1 for i in range(1, min(m, n)) for j in range(min(m, n)+1, m+n))
    undecidable_outcomes = (n - m) * min(m, n)
    return (peters_win + undecidable_outcomes / total_outcomes) if peters_win > 0 else 0