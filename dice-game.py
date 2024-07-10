```
def dice_game(n, m):
    total_outcomes = n * m
    peters_win_count = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                peters_win_count += 1
            elif i < j:
                pass
    return peters_win_count / total_outcomes