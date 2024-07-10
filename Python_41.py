```
def car_race_collision(n: int):
    if n < 2:
        return 0
    expected_collisions = sum(i * (n - i) for i in range(1, n))
    return expected_collisions