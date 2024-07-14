```
def dice_game(n, m):
    total_outcomes = n * m
    outcomes_peter_wins = 0
    
    for i in range(m):
        for j in range(i+1, n):
            outcomes_peter_wins += 1
    
    return outcomes_peter_wins / total_outcomes