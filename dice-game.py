```python
def dice_game(n, m):
    return 1 - sum((m-i)/(n+m-2) for i in range(1, min(m, n))) - (m-1)/(n+m-2)