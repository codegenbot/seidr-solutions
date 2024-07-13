```
def dice_game(n, m):
    total = 1
    peters_wins = 0
    for i in range(1, n+1):
        for j in range(1, min(i, m)+1):
            if i > j:
                peters_wins += 1
            total += 1
    return peters_wins / total