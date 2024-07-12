def car_race_collision(n: int):
    total_collisions = 0
    for i in range(1, n):
        for j in range(i + 1, n):
            if abs((i - (n - 1)) - (j - (n - 1))) <= min(i, j):
                total_collisions += 1
    return total_collisions