def car_race_collision(n: int):
    total_collisions = 0
    for i in range(1, n + 1):
        for j in range(i + 1, n + 1):
            total_collisions += i + j
    return total_collisions