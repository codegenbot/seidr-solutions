```
def dice_game(n, m):
    num_outcomes = n * m
    strictly_higher_count = 0
    for p in range(1, min(n, m) + 1):
        for c in range(1, min(n, m)):
            if p > c:
                strictly_higher_count += 1
    return strictly_higher_count / num_outcomes