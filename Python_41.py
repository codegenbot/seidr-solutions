def car_race_collision(n: int) -> int:
    if n == 2:
        return 1
    collision_count = n * (n - 1) // 2
    return collision_count