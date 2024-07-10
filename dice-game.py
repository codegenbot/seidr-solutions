def roll_higher(n, m):
    total_combinations = n * m
    higher_rolls = 0
    for i in range(1, min(n,m)+1):
        for j in range(i+1, max(n,m)+1):
            if i > j:
                higher_rolls += 1
    return higher_rolls / total_combinations