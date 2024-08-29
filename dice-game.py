```python
def roll_dice(n, m):
    total_rolls = n * m
    higher_than_colin = sum(1 for i in range(m+1, n*m) if (i % n) > (i % m))
    return higher_than_colin / total_rolls