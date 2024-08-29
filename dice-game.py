```
def dice_game(n, m):
    total_outcomes = n * m
    probability = 0
    for i in range(1, min(n, m) + 1):
        for j in range(1, max(n, m) - i + 1):
            if i < j:
                probability += 1
    return probability / total_outcomes