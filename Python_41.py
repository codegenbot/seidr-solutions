def car_race_collision(n: int):
    total_collisions = 0
    for i in range(1, n):
        total_collisions += i
    return total_collisions