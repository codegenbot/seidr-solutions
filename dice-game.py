```python
def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum(min(i, j) < i for i in range(1, n+1) for j in range(1, m))
    return peters_wins / total_outcomes