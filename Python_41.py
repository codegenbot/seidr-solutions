```python
def """Car Racing Competition: The number of cars that collided during the race""">(n: int):
    return sum(i * (n - i) for i in range(1, n))