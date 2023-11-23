def car_race_collision(n: int) -> int:
    pairs = n * (n - 1) // 2
    collisions = pairs * (pairs + 1) // 2
    return collisions