def car_race_collision(n: int) -> int:
    collision_count = 0
    for i in range(2, n):
        collision_count += n - i
    return collision_count * (n - 1)