```python
def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = (n - m) * m
    return peters_win / total_outcomes