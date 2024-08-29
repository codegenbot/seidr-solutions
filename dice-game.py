```python
def probability(n, m):
    total = n * m
    p_count = 0
    for i in range(1, min(n, m) + 1):
        if i < m - m + i:
            p_count += 1
    return p_count / total