```python
def dice_game(n, m):
    peter_rolls = set(range(1, n+1))
    colin_rolls = set(range(1, m+1))
    higher_than_colin = sum(1 for _ in peter_rolls if int(_) > max(colin_rolls)) / (n * m)
    return higher_than_colin