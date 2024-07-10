```
def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(range(m))  
    return (peter_wins + (n - m)) / total_outcomes