```python
def dice_game(n, m):
    return (n - 1) / n * sum(1/i for i in range(2, min(n, m)+1)) + (min(n, m)-1) / n if n != m else 0.5