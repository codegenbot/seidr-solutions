```
def dice_game(n, m):
    num_outcomes = n * m
    strictly_higher_count = 0
    for peter_roll in range(1, n+1):
        for colin_roll in range(1, min(peter_roll, m)+1):
            if peter_roll > colin_roll:
                strictly_higher_count += 1
    return strictly_higher_count / num_outcomes