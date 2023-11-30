def car_race_collision(n: int) -> int:
    collision_count = 0
    for i in range(1, n):
        for j in range(i+1, n+1):
            collision_count += i * j
    return collision_count