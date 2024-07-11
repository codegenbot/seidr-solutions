```
def car_race_collision(n: int):
    if n < 2:
        return 0
    else:
        return (n - 1) * n // 2