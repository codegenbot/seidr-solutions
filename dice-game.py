```python
def dice_game(n, m):
    total_ways = n*m
    ways_peterwins = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j)
    return ways_peterwins / total_ways