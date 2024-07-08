```
def dice_game(n, m):
    num_outcomes = n * m
    strictly_higher_count = 0
    for i in range(1, min(m-1, n-1) + 1):
        strictly_higher_count += (n - i) * m + i * (m - n)
    if m > n:
        strictly_higher_count += n * (m - n)
    return strictly_higher_count / num_outcomes