````
`def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0
    for i in range(1, min(n,m)+1):
        if i <= (m//2) + ((m%2) > 0 and i == m//2+1):
            favorable_outcomes += n - i + 1
        else:
            favorable_outcomes += i
    return favorable_outcomes / total_outcomes`