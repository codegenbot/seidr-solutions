def car_race_collision(n: int):
    collision_count = 0
    for i in range(1, n):
        for j in range(i + 1, n):
            if (abs(i - j)) % ((max(i, j) ** 2 - min(i, j) ** 2) ** 0.5) < abs(i - j):
                collision_count += 1
    return collision_count