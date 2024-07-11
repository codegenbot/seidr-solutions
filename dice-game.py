```
def dice_game(n, m):
    total_outcomes = n * m
    outcomes_peter_wins = 0
    
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                outcomes_peter_wins += 1
                
    return outcomes_peter_wins / total_outcomes