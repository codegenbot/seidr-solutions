def roll_dice(n, m):
    peter_wins = sum((i-1)/(n*m) for i in range(2, min(n+1,m+1))) 
    return peter_wins