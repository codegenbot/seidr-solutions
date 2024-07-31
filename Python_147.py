```python
def get_max_triples(n):
    """Return the maximum number of triples (a, b, c) that satisfy a^2 - a + 1 + b^2 - b + 1 + c^2 - c + 1 is divisible by 3."""
    return sum((n*(n-1)*(2*n-1))//6 for _ in range(1, n+1))