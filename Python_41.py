def car_race_collision(n: int):
    collisions = 0
    for i in range(n):
        for j in range(i + 1, n):
            if (i + 2) <= (j - 1):
                collisions += 1
    return collisions