```
def dice_game(n, m):
    peter_wins = sum(1 for _ in range((m-1)*(n-1)+1, n*m+1))
    return peter_wins / (n*m)