```
def dice_game(n, m):
    num_favorable_outcomes = sum(min(i, j) < j - 1 for i in range(1, n + 1) for j in range(1, m + 1))
    total_possible_outcomes = n * m
    return num_favorable_outcomes / total_possible_outcomes