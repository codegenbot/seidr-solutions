def car_race_collision(n: int):
    collisions = 0
    for i in range(1, n):
        for j in range(i):
            if abs(i - j) <= min(i, j):
                collisions += 1
    return collisions