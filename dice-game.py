
def get_probability(n, m):
    return sum(peter_rolls_higher(i, j) for i in range(1, n + 1) for j in range(1, m + 1)) / (n * m)

def peter_rolls_higher(peter_roll, colin_roll):
    if peter_roll == colin_roll:
        return 0.5
    else:
        return int(peter_roll > colin_roll)