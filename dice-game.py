def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(min(m//2 + 1, (n-1)//m), min(m, n-1) + 1)) * m
    else_outcomes = total_outcomes - peters_win
    return peters_win / total_outcomes if n >= m else else_outcomes / total_outcomes