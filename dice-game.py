```python
import math

def probability_of_peter_rolling_higher(n, m):
    return 1 / (m + 1) * sum(math.comb(n, i) * math.comb(m, i - 1) for i in range(1, n + 1))
```