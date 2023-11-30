def car_race_collision(n: int) -> int:
    collision_count = 0
    for i in range(n):
        collision_count += (n - i) * 2
    return collision_count