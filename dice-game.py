def dice_game(n, m):
    total_outcomes = n * m
    peters_highest_count = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i >= j + 1:
                peters_highest_count += 1
    return peters_highest_count / total_outcomes