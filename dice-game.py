```python
import math
def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for j in range(m-n+1) if (n-1)*m+j < j*(n+m))
    return peter_wins / total_outcomes