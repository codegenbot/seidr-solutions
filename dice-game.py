def dice_game(n, m):
    if n < m:
        return 1.0
    elif m == 1:
        return 0.0
    num_outcomes = n * m
    strictly_higher_count = 0
    for i in range(min(m-1, n-m)):
        strictly_higher_count += min(n - i, m) * (n - m)
    if m < n:
        strictly_higher_count += (n - m) * m
    return strictly_higher_count / num_outcomes