```
def dice_game(n, m):
    total_outcomes = n * m
    same_outcome = max(m, n) - min(m, n)
    strictly_higher_outcomes = sum(1 for i in range(min(m, n)) for j in range(i+1, max(m, n)+1))
    probability = (strictly_higher_outcomes + 0.5*same_outcome) / total_outcomes
    return probability