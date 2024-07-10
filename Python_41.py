```python
def car_race_collision(n: int):
    return sum(i * (n - i) for i in range(1, n)) // 2