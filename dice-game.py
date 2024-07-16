def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for _ in range(total_outcomes) 
                           if random.randint(1, n) > random.randint(1, m))
    return peter_win_count / float(total_outcomes)