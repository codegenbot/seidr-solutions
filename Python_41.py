def car_race_collision(n: int) -> int:
    car_pairs = n * (n - 1)
    non_collisions = car_pairs // 2
    collisions = car_pairs - non_collisions
    return collisions