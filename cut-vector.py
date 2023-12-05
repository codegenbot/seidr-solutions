```python
def cut_vector(vector):
    n = len(vector)
    min_diff = math.inf
    for i in range(1, n-1):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            cut = i
    return vector[:cut], vector[cut:]
```