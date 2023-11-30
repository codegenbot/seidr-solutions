def car_race_collision(n: int) -> int:
    collision_count = 0
    for i in range(n):
        collision_count += (i + 1) * (n - i - 1)
    return collision_count