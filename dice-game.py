```python
from math import comb

def get_probability(n, m):
    return comb(n + m -        1, n) / (n * m)
```