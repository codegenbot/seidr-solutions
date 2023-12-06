```python
import math

def get_probability(n, m):
    total_rolls = n * m
    peter_wins = 0
    
    for i in range(1, total_rolls + 1):
        if i % n > i % m:
            peter_wins += 1
    
    probability = peter_wins / total_rolls
    
    return probability
```