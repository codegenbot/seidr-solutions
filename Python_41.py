def car_race_collision(n: int):
    total_collisions = 0
    for i in range(1, n):
        for j in range(i):
            if abs(i - j) <= min(i, j):
                total_collisions += 2
    return total_collisions