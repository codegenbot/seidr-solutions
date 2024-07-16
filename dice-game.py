def dice_game(n, m):
    peter_win_count = sum(1 for _ in range(m+1) 
                           for j in range(1, m+1) 
                           if (j + 1 <= n and random.randint(1, min(j+1, n)) > random.randint(1, m)))
    total_outcomes = (n * m)
    return peter_win_count / float(total_outcomes)