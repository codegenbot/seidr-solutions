def car_race_collision(n: int) -> int:
    collisions = n * (n - 1) * (n - 2) // 6
    return collisions