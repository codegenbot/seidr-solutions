```
def dice_game(n, m):
    total_outcomes = n * m
    peters_highest_count = 0
    for i in range(1, min(n, m)+1):
        for j in range(1, max(n, m)-i+1):
            if i > j:
                peters_highest_count += 1
    return peters_highest_count / total_outcomes