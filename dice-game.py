def dice_game(n, m):
    total_cases = n * m
    peter_wins = 0
    
    for i in range(1, min(n, m)):
        peter_wins += (n - i) * (m - i)
    
    return peter_wins / total_cases