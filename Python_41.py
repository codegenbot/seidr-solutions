def car_race_collision(n: int) -> int:
    collision_count = 0
    for i in range(1, n):
        collision_count += (n - i) * (n - i - 1)
    return collision_count