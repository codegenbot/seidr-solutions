```
def car_race_collision(n: int, speed: float, acceleration: float):
    return (n * (n + 1) // 2) * (speed + acceleration * n)