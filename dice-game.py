```python
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0
    for i in range(1, min(n, m) + 1):
        favorable_outcomes += max(n - i, 0) * min(n - 1, m - i)
    return favorable_outcomes / total_outcomes