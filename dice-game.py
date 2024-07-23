def dice_game(n, m):
    total_outcomes = n * m
    equal_outcome_prob = (1 / total_outcomes)
    
    peter_wins_prob = sum(1 / total_outcomes for _ in range(max(n, m) - 1))
    
    return 1 - equal_outcome_prob - peter_wins_prob