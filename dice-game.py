```
def dice_game(n, m):
    num_outcomes = n * m
    strictly_higher_count = 0
    for peter_roll in range(max(m)+1, n+1):
        strictly_higher_count += m
    return strictly_higher_count / num_outcomes