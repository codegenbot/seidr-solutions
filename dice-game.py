```python
def """dice_game(n, m):
    total = n*m
    peters_wins = 0
    for i in range(1, min(n,m)+1):
        peters_wins += min(i,n-1) - max(m-i+1, 0)
    return peters_wins / total
"""