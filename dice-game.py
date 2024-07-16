```
def dice_game(n, m):
    peter_win_count = sum(sum(1 for _ in range(m)) if j <= k else 0 for j in range(1, n+1) for k in range(1, min(j, m)+1))
    total_outcomes = (n * m)
    return peter_win_count / float(total_outcomes)