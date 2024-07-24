```
def dice_game(n, m):
    total = n * m
    peter_wins = 0
    
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                peter_wins += 1
                
    return peter_wins / total