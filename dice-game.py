def roll_dice(n, m):
    p_total = sum(1 for _ in range(1, n + 1))
    c_total = sum(1 for _ in range(1, m + 1))

    total_combinations = p_total * c_total

    higher_count = sum(sum(min(i, j) < i - 1 and 1 for j in range(1, m + 1)) for i in range(1, n + 1))
    
    return higher_count / total_combinations