```
def car_race_collision(n: int):
    pairs = (n // 2) * ((n - 1) // 2)
    return str(min(0, pairs - n))