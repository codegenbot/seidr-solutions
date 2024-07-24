def car_race_collision(n: int):
    total_collisions = 0
    for i in range(1, n):
        for j in range(i + 1, n):
            total_collisions += 1
    return total_collisions * 2