def car_race_collision(n: int) -> int:
    collision_count = 0
    for i in range(1, n+1):
        collision_count += i * 2
    return collision_count